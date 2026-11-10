/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_002B8DD0
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003b8dd0; name: FUN_.text__003b8dd0
 */


void FUN__text__003b8dd0(undefined8 *param_1,undefined4 param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  char *pcVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar2 = *(long *)*param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar3 = ((long *)*param_1)[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if ((lVar2 == lVar3) || (*(char *)(lVar2 + 8) != '\0')) { // [自动静态注释] 条件判断/分支
    lVar4 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (lVar2 != lVar3) { // [自动静态注释] 条件判断/分支
      lVar4 = lVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    *(undefined4 *)(lVar4 + 0xc) = param_2;
    *(undefined1 *)(lVar4 + 8) = 0;
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  do { // [自动静态注释] 循环/迭代
    lVar4 = lVar2 + 0x18; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    pcVar1 = (char *)(lVar2 + 0x20); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar2 = lVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } while (*pcVar1 == '\0'); // [自动静态注释] 循环/迭代
  lVar2 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (lVar4 != lVar3) { // [自动静态注释] 条件判断/分支
    lVar2 = lVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  *(undefined4 *)(lVar2 + 0xc) = param_2;
  *(undefined1 *)(lVar2 + 8) = 0;
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


