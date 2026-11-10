/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0027BA18
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0037ba18; name: FUN_.text__0037ba18
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0037ba18(undefined8 *param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined8 local_60; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uStack_58; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_50; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uStack_48; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_40; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uStack_38; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_30; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uStack_28; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  nn::crypto::detail::Sha256Impl::Initialize(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  local_40 = _DAT_00735400; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uStack_38 = _DAT_00735408; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_30 = _DAT_00735410; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uStack_28 = _DAT_00735418; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_60 = _DAT_007353e0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uStack_58 = _DAT_007353e8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_50 = _DAT_007353f0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uStack_48 = _DAT_007353f8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  nn::crypto::detail::Sha256Impl::Update(param_1 + 2,(ulong)&local_60); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


