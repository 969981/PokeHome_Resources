/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0040F11C
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0050f11c; name: FUN_.text__0050f11c
 */


void FUN__text__0050f11c(long param_1,int param_2,undefined8 *param_3,undefined8 *param_4, // [自动静态注释] 调用尚未恢复正式名称的函数
                        undefined8 *param_5) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义

{ // [自动静态注释] 作用域/控制流边界
  ushort *puVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  puVar1 = (ushort *) // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
           (*(long *)(param_1 + 8) + // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
           (ulong)(ushort)((uint)(param_2 - *(int *)(param_1 + 0x20)) >> 6) * 8); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  puVar2 = (undefined8 *)(*(long *)(param_1 + 0x10) + (ulong)*puVar1 * 0xc); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar3 = *puVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined4 *)(param_3 + 1) = *(undefined4 *)(puVar2 + 1);
  *param_3 = uVar3;
  puVar2 = (undefined8 *)(*(long *)(param_1 + 0x10) + (ulong)puVar1[1] * 0xc); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar3 = *puVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined4 *)(param_4 + 1) = *(undefined4 *)(puVar2 + 1);
  *param_4 = uVar3;
  puVar2 = (undefined8 *)(*(long *)(param_1 + 0x10) + (ulong)puVar1[2] * 0xc); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar3 = *puVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined4 *)(param_5 + 1) = *(undefined4 *)(puVar2 + 1);
  *param_5 = uVar3;
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


