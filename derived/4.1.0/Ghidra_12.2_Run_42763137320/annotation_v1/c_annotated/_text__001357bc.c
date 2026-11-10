/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_000357BC
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001357bc; name: FUN_.text__001357bc
 */


void FUN__text__001357bc(long param_1,undefined4 param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  code *pcVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  code *local_110; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  code *local_108; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 *local_100; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 *local_f8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lStack_f0; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 local_e8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uStack_e4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_88 [11]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar1 = param_1 + 0x110; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__0012bca0(lVar1,0); // [自动静态注释] 调用尚未恢复正式名称的函数
  local_88[0] = 0x431e769ffc1ad350; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar3 = FUN__text__0012ce7c(lVar1,local_88); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__003a14e8(uVar3,0); // [自动静态注释] 调用尚未恢复正式名称的函数
  local_110 = FUN__text__00135bbc; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_108 = FUN__text__00135c28; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_100 = &LAB__text__00135c2c; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uStack_e4 = (undefined4)local_88[0]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_f8 = &LAB__text__00135c38; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lStack_f0 = param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_e8 = param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__0012c3b0(lVar1,0x713a0f,&local_110); // [自动静态注释] 调用尚未恢复正式名称的函数
  pcVar2 = local_108; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (local_108 != (code *)0x0) { // [自动静态注释] 条件判断/分支
    local_100 = (undefined1 *)0x0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_f8 = (undefined1 *)0x0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_110 = (code *)0x0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_108 = (code *)0x0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    (*pcVar2)(&lStack_f0); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


