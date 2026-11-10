/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00358DE0
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00458de0; name: FUN_.text__00458de0
 */


undefined8 FUN__text__00458de0(long *param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined8 *puVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar2 = FUN__text__00400f80(0,0x30); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (lVar2 == 0) { // [自动静态注释] 条件判断/分支
    *param_1 = 0;
    return 2; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__00458468(); // [自动静态注释] 调用尚未恢复正式名称的函数
  *param_1 = lVar2;
  puVar3 = (undefined8 *)FUN__text__00400f80(0,0xa0); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(undefined8 **)(lVar2 + 0x18) = puVar3;
  if (puVar3 == (undefined8 *)0x0) { // [自动静态注释] 条件判断/分支
    return 1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  uVar4 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined8 **)(lVar2 + 0x10) = puVar3;
  *(undefined4 *)(lVar2 + 0x20) = 4;
  do { // [自动静态注释] 循环/迭代
    puVar1 = puVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined1 *)(puVar1 + 4) = 0;
    uVar4 = uVar4 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puVar1[2] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puVar1[3] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *puVar1 = puVar1 + 5;
    puVar1[1] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puVar3 = puVar1 + 5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } while (uVar4 < *(uint *)(lVar2 + 0x20)); // [自动静态注释] 循环/迭代
  *puVar1 = 0;
  return 1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


