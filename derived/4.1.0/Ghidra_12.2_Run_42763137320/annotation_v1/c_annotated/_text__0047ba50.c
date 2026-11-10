/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0037BA50
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0047ba50; name: FUN_.text__0047ba50
 */


void FUN__text__0047ba50(long *param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined8 *puVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  puVar1 = (undefined8 *)*param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar2 = puVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if ((int)param_1[1] != 0) { // [自动静态注释] 条件判断/分支
    do { // [自动静态注释] 循环/迭代
      puVar3 = puVar2 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar4 = *puVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      FUN__text__0047c508(uVar4); // [自动静态注释] 调用尚未恢复正式名称的函数
      FUN__text__0047c4a8(uVar4); // [自动静态注释] 调用尚未恢复正式名称的函数
      FUN__text__00400fc0(0,uVar4); // [自动静态注释] 调用尚未恢复正式名称的函数
      puVar1 = (undefined8 *)*param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar2 = puVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (puVar3 != puVar1 + *(uint *)(param_1 + 1)); // [自动静态注释] 循环/迭代
  } // [自动静态注释] 作用域/控制流边界
  if (puVar1 != (undefined8 *)0x0) { // [自动静态注释] 条件判断/分支
    *(undefined4 *)(param_1 + 1) = 0;
    FUN__text__00400fc0(0,puVar1); // [自动静态注释] 调用尚未恢复正式名称的函数
    *param_1 = 0;
    *(undefined4 *)((long)param_1 + 0xc) = 0;
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


