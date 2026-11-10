/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0058D514
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0068d514; name: FUN_.text__0068d514
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0068d514(undefined8 *param_1,long *param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined8 uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  iVar3 = (**(code **)(*param_2 + 0xc0))(); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar1 = _DAT_008a6648; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (iVar3 == 3) { // [自动静态注释] 条件判断/分支
    *param_1 = 0;
    param_1[1] = uVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    param_1[2] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  uVar1 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (iVar3 == 1) { // [自动静态注释] 条件判断/分支
    uVar1 = _DAT_008a6638; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  uVar2 = _DAT_008a6650; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (iVar3 != 2) { // [自动静态注释] 条件判断/分支
    uVar2 = uVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  *param_1 = 0;
  param_1[1] = uVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[2] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


