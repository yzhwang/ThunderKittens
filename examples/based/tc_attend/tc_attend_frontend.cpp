#include <torch/extension.h>
#include <vector>

extern void  sliding_window_tk(torch::Tensor q, torch::Tensor k, torch::Tensor v, torch::Tensor v_out);

PYBIND11_MODULE(TORCH_EXTENSION_NAME, m) {
    m.doc() = "Test handler for warp test"; // optional module docstring
    m.def("sliding_window_tk", sliding_window_tk);
}
