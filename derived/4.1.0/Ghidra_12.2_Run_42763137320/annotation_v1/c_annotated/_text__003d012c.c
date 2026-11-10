/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_002D012C
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003d012c; name: FUN_.text__003d012c
 */


undefined8 FUN__text__003d012c(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar3 = *(long *)(param_1 + 0x18); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if ((((lVar3 == 0) || (*(char *)(lVar3 + 0x170) == '\0')) || // [自动静态注释] 条件判断/分支
      (lVar2 = *(long *)(param_1 + 0x128), lVar2 == 0)) || // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
     (((*(char *)(lVar2 + 0x170) == '\0' || (lVar1 = *(long *)(param_1 + 0x238), lVar1 == 0)) || // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      (*(char *)(lVar1 + 0x170) == '\0')))) { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    return 0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  if (*(long *)(param_1 + 0x350) == 0) { // [自动静态注释] 条件判断/分支
    *(undefined8 *)(param_1 + 0x350) = *(undefined8 *)(lVar3 + 400);
    *(int *)(param_1 + 0x358) = (int)*(undefined8 *)(lVar3 + 0x180);
    lVar3 = *(long *)(param_1 + 0x340); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    lVar3 = *(long *)(param_1 + 0x340); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  if (lVar3 == 0) { // [自动静态注释] 条件判断/分支
    *(undefined8 *)(param_1 + 0x340) = *(undefined8 *)(lVar2 + 400);
    *(int *)(param_1 + 0x348) = (int)*(undefined8 *)(lVar2 + 0x180);
    lVar3 = *(long *)(param_1 + 0x360); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    lVar3 = *(long *)(param_1 + 0x360); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  if (lVar3 == 0) { // [自动静态注释] 条件判断/分支
    *(undefined8 *)(param_1 + 0x360) = *(undefined8 *)(lVar1 + 400);
    *(int *)(param_1 + 0x368) = (int)(*(ulong *)(lVar1 + 0x180) >> 2);
    return 1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  return 1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


