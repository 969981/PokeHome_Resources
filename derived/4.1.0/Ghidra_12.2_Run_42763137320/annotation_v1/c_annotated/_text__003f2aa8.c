/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_002F2AA8
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003f2aa8; name: FUN_.text__003f2aa8
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN__text__003f2aa8(undefined8 *param_1,long *param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long *plVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  plVar1 = _DAT_0089f5d0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*param_2 != 0) { // [自动静态注释] 条件判断/分支
    plVar1 = (long *)(*param_2 + 0x60); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  plVar2 = param_2 + 2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (param_2[3] != 0) { // [自动静态注释] 条件判断/分支
    plVar2 = plVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  iVar3 = (**(code **)(*(long *)*param_1 + 0x30))((long *)*param_1,*plVar2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  return iVar3 == 1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


