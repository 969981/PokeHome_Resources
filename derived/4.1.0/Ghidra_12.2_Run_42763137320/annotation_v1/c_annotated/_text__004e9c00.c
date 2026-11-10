/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_003E9C00
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004e9c00; name: FUN_.text__004e9c00
 */


void FUN__text__004e9c00(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long *plVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  plVar4 = (long *)(param_1 + 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(byte *)(param_1 + 0x40) = *(byte *)(param_1 + 0x40) & 0xfc;
  puVar2 = (undefined8 *)*plVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  while (puVar2 != (undefined8 *)0x0) { // [自动静态注释] 循环/迭代
    if (*(int *)(puVar2 + 3) == 1) { // [自动静态注释] 条件判断/分支
      FUN__text__004e9250(puVar2[4]); // [自动静态注释] 调用尚未恢复正式名称的函数
    } // [自动静态注释] 作用域/控制流边界
    puVar5 = (undefined8 *)puVar2[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    plVar1 = plVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if ((undefined8 *)*plVar4 != puVar2) { // [自动静态注释] 条件判断/分支
      plVar1 = (long *)&DAT_00000010; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    *plVar1 = (long)puVar5;
    (**(code **)*puVar2)(puVar2); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    FUN__text__00400fc0(0,puVar2); // [自动静态注释] 调用尚未恢复正式名称的函数
    puVar2 = puVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  if (*(long *)(param_1 + 0x18) != 0) { // [自动静态注释] 条件判断/分支
    *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x80) = 0;
    lVar3 = *(long *)(param_1 + 0x18); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined8 *)(param_1 + 0x18) = 0;
    if (lVar3 != 0) { // [自动静态注释] 条件判断/分支
      FUN__text__004eb980(); // [自动静态注释] 调用尚未恢复正式名称的函数
      return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


