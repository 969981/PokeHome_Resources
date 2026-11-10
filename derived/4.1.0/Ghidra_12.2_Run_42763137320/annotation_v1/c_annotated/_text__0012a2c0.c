/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0002A2C0
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0012a2c0; name: FUN_.text__0012a2c0
 */


void FUN__text__0012a2c0(long param_1,long param_2,undefined8 param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long *plVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  *(long *)(param_1 + 8) = param_2;
  *(undefined8 *)(param_1 + 0x10) = param_3;
  puVar3 = (undefined8 *)0x0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(long *)(param_2 + 0x70) != 0) { // [自动静态注释] 条件判断/分支
    puVar3 = *(undefined8 **)(*(long *)(param_2 + 0x70) + 0x60); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (puVar3 == (undefined8 *)0x0) { // [自动静态注释] 条件判断/分支
LAB__text__0012a33c: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      *(undefined8 *)(param_1 + 0x18) = 0;
      return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
    plVar1 = (long *)(**(code **)*puVar3)(puVar3); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    plVar2 = (long *)FUN__text__0012d4b4(); // [自动静态注释] 调用尚未恢复正式名称的函数
    if (plVar2 != plVar1) { // [自动静态注释] 条件判断/分支
      do { // [自动静态注释] 循环/迭代
        plVar1 = (long *)*plVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } while (plVar1 != plVar2 && plVar1 != (long *)0x0); // [自动静态注释] 循环/迭代
      if (plVar1 == (long *)0x0) goto LAB__text__0012a33c; // [自动静态注释] 条件判断/分支
    } // [自动静态注释] 作用域/控制流边界
    puVar3 = puVar3 + -10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  *(undefined8 **)(param_1 + 0x18) = puVar3;
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


