/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00579224
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00679224; name: FUN_.text__00679224
 */


uint FUN__text__00679224(undefined8 param_1,undefined8 param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  void *pvVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_48; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  void *local_40; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong local_38; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint local_14; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  local_14 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_38 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_40 = (void *)0x0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__00679144(&local_40,&local_14,&local_38,param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
  pvVar1 = local_40; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar2 = local_14; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (local_14 == 0) { // [自动静态注释] 条件判断/分支
    local_48 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar2 = nn::ssl::Context::ImportServerPki(param_1,&local_48,local_40,local_38 & 0xffffffff,1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  if (pvVar1 != (void *)0x0) { // [自动静态注释] 条件判断/分支
    operator_delete__(pvVar1); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  return uVar2 & 0x3fffff; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


