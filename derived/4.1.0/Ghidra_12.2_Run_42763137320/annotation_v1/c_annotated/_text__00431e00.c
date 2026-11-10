/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00331E00
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00431e00; name: FUN_.text__00431e00
 */


undefined8 FUN__text__00431e00(long param_1,undefined8 param_2,undefined8 param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined8 *puVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  puVar1 = *(undefined8 **)(param_1 + 0x50); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (puVar1 == (undefined8 *)0x0) { // [自动静态注释] 条件判断/分支
    puVar1 = (undefined8 *)FUN__text__00400f80(0,0x20); // [自动静态注释] 调用尚未恢复正式名称的函数
    if (puVar1 == (undefined8 *)0x0) { // [自动静态注释] 条件判断/分支
      return 2; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
    *puVar1 = *(undefined8 *)(param_1 + 0x50);
    *(undefined8 **)(param_1 + 0x50) = puVar1;
    puVar2 = *(undefined8 **)(param_1 + 0x48); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    puVar2 = *(undefined8 **)(param_1 + 0x48); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  if (puVar2 == (undefined8 *)0x0) { // [自动静态注释] 条件判断/分支
    *(undefined8 **)(param_1 + 0x40) = puVar1;
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    *puVar2 = puVar1;
    puVar1 = *(undefined8 **)(param_1 + 0x50); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  *(undefined8 **)(param_1 + 0x48) = puVar1;
  *(undefined8 *)(param_1 + 0x50) = *puVar1;
  *puVar1 = 0;
  lVar3 = *(long *)(param_1 + 0x48); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 1;
  *(undefined8 *)(lVar3 + 8) = param_2;
  *(undefined4 *)(lVar3 + 0x10) = 0;
  *(undefined8 *)(lVar3 + 0x18) = param_3;
  return 1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


