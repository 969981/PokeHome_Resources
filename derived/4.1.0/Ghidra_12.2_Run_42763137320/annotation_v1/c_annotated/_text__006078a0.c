/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_005078A0
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006078a0; name: FUN_.text__006078a0
 */


uint FUN__text__006078a0(undefined8 param_1,ulong param_2,uint param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  uint uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_50; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_48; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uStack_40; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined2 local_38; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  local_38 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_50 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_48 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uStack_40 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__00601290(&local_50,param_2,param_3 & 0xff); // [自动静态注释] 调用尚未恢复正式名称的函数
  uVar2 = FUN__text__005f3560(param_1,&local_50); // [自动静态注释] 调用尚未恢复正式名称的函数
  uVar1 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if ((uVar2 & 1) == 0) { // [自动静态注释] 条件判断/分支
    local_38 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_48 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uStack_40 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_50 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    FUN__text__00607930(&local_50,param_2 & 0xffffffff,param_3); // [自动静态注释] 调用尚未恢复正式名称的函数
    uVar1 = FUN__text__005f3560(param_1,&local_50); // [自动静态注释] 调用尚未恢复正式名称的函数
    uVar1 = uVar1 ^ 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  return uVar1 & 1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


