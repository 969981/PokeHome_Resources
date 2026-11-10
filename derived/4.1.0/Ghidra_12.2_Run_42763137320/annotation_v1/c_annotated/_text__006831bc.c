/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_005831BC
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006831bc; name: FUN_.text__006831bc
 */


undefined8 FUN__text__006831bc(long *param_1,ulong param_2,undefined8 param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  uVar3 = param_1[1] - *param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (param_2 <= uVar3) { // [自动静态注释] 条件判断/分支
    return 0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  uVar3 = uVar3 * 2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (uVar3 <= param_2) { // [自动静态注释] 条件判断/分支
    uVar3 = param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  lVar1 = FUN__text__00680a20(param_3,*param_1,uVar3); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (lVar1 == 0) { // [自动静态注释] 条件判断/分支
    uVar2 = 0xfffffc7b; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    lVar4 = *param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar2 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    param_1[2] = lVar1 + (param_1[2] - lVar4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    param_1[3] = lVar1 + (param_1[3] - lVar4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    param_1[4] = lVar1 + (param_1[4] - lVar4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *param_1 = lVar1;
    param_1[1] = lVar1 + uVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  return uVar2; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


