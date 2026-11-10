/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0034AC30
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0044ac30; name: FUN_.text__0044ac30
 */


undefined8 FUN__text__0044ac30(long param_1,long param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  int iVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  iVar1 = *(int *)(param_2 + 0x20); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar2 = *(uint *)(param_2 + 0xd2) >> 0x11; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar3 = (undefined8 *)(param_1 + 0x20); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  while (puVar3 = (undefined8 *)*puVar3, puVar3 != (undefined8 *)0x0) { // [自动静态注释] 循环/迭代
    if (iVar1 == *(int *)(puVar3 + 1) && (uVar2 & 1) == (uint)*(byte *)((long)puVar3 + 0xc)) { // [自动静态注释] 条件判断/分支
      return 1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  puVar3 = *(undefined8 **)(param_1 + 0x30); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (puVar3 == (undefined8 *)0x0) { // [自动静态注释] 条件判断/分支
    puVar3 = (undefined8 *)FUN__text__00400f80(0,0x10); // [自动静态注释] 调用尚未恢复正式名称的函数
    if (puVar3 == (undefined8 *)0x0) { // [自动静态注释] 条件判断/分支
      return 2; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
    *puVar3 = *(undefined8 *)(param_1 + 0x30);
    *(undefined8 **)(param_1 + 0x30) = puVar3;
    puVar4 = *(undefined8 **)(param_1 + 0x28); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    puVar4 = *(undefined8 **)(param_1 + 0x28); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  if (puVar4 == (undefined8 *)0x0) { // [自动静态注释] 条件判断/分支
    *(undefined8 *)(param_1 + 0x20) = puVar3;
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    *puVar4 = puVar3;
    puVar3 = *(undefined8 **)(param_1 + 0x30); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  *(undefined8 **)(param_1 + 0x28) = puVar3;
  *(undefined8 *)(param_1 + 0x30) = *puVar3;
  *puVar3 = 0;
  *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + 1;
  *(ulong *)(*(long *)(param_1 + 0x28) + 8) = CONCAT44(uVar2,iVar1) & 0x1ffffffff;
  return 1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


