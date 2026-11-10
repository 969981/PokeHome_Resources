/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_005E7A54
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006e7a54; name: FUN_.text__006e7a54
 */


void FUN__text__006e7a54(float param_1,undefined8 param_2,long param_3,int *param_4,int *param_5, // [自动静态注释] 调用尚未恢复正式名称的函数
                        int param_6,undefined8 *param_7,undefined8 *param_8,undefined8 *param_9) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义

{ // [自动静态注释] 作用域/控制流边界
  int iVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  iVar1 = *param_4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar3 = (undefined8 *)(param_3 + (long)iVar1 * 0xa0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar6 = param_7[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *puVar3 = *param_7;
  *(int *)(puVar3 + 1) = (int)uVar6;
  uVar6 = param_7[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar2 = (undefined8 *)(param_3 + (long)(int)(iVar1 << 1 | 1) * 0x50); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *puVar2 = *param_7;
  *(int *)(puVar2 + 1) = (int)uVar6;
  uVar6 = param_8[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar3[2] = *param_8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(int *)(puVar3 + 3) = (int)uVar6;
  uVar6 = param_8[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar2[2] = *param_8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(int *)(puVar2 + 3) = (int)uVar6;
  uVar6 = param_9[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar3[4] = *param_9; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(int *)(puVar3 + 5) = (int)uVar6;
  uVar6 = param_9[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar2[4] = *param_9; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(int *)(puVar2 + 5) = (int)uVar6;
  *(float *)((long)puVar3 + 0xc) = -param_1;
  fVar5 = (float)iVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(float *)((long)puVar2 + 0xc) = param_1;
  fVar4 = fVar5 / (float)(param_6 + -1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(float *)((long)puVar3 + 0x1c) = fVar4;
  *(float *)((long)puVar2 + 0x1c) = fVar4;
  *(float *)((long)puVar3 + 0x2c) = fVar5;
  *(float *)((long)puVar2 + 0x2c) = fVar5;
  *param_5 = *param_5 + 2;
  *param_4 = *param_4 + 1;
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


