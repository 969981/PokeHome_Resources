/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_000E3E20
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001e3e20; name: FUN_.text__001e3e20
 */


bool FUN__text__001e3e20(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  char cVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  cVar1 = *(char *)(param_1 + 0x80); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (cVar1 != '\0') { // [自动静态注释] 条件判断/分支
    puVar4 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    plVar2 = (long *)(**(code **)*puVar4)(puVar4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    plVar3 = (long *)FUN__text__0018d6a0(); // [自动静态注释] 调用尚未恢复正式名称的函数
    if (plVar3 != plVar2) { // [自动静态注释] 条件判断/分支
      do { // [自动静态注释] 循环/迭代
        plVar2 = (long *)*plVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } while (plVar2 != plVar3 && plVar2 != (long *)0x0); // [自动静态注释] 循环/迭代
    } // [自动静态注释] 作用域/控制流边界
    *(undefined4 *)(puVar4 + 0x6a) = 6;
  } // [自动静态注释] 作用域/控制流边界
  return cVar1 != '\0'; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


