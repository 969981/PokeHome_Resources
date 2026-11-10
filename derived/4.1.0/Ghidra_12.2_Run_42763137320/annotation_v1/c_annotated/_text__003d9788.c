/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_002D9788
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003d9788; name: FUN_.text__003d9788
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN__text__003d9788(long *param_1,char *param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  char cVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 *puVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (*param_1 != 0) { // [自动静态注释] 条件判断/分支
    return 0x72; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  puVar2 = operator_new(0x98,_DAT_008a37f8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (puVar2 == (undefined4 *)0x0) { // [自动静态注释] 条件判断/分支
    return 0xc; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  *(undefined8 *)(puVar2 + 0x24) = 0;
  *(undefined8 *)(puVar2 + 6) = 0;
  *(undefined8 *)(puVar2 + 4) = 0;
  *(undefined8 *)(puVar2 + 10) = 0;
  *(undefined8 *)(puVar2 + 8) = 0;
  *(undefined4 **)(puVar2 + 6) = puVar2 + 10;
  puVar2[4] = 5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  cVar1 = param_2[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined8 *)(puVar2 + 0xe) = 0;
  *(undefined8 *)(puVar2 + 0xc) = 0;
  *(undefined8 *)(puVar2 + 0x12) = 0;
  *(undefined8 *)(puVar2 + 0x10) = 0;
  *(undefined8 *)(puVar2 + 0x16) = 0;
  *(undefined8 *)(puVar2 + 0x14) = 0;
  *(undefined8 *)(puVar2 + 0x1a) = 0;
  *(undefined8 *)(puVar2 + 0x18) = 0;
  *(undefined4 **)(puVar2 + 0x14) = puVar2 + 0x16;
  uVar3 = (uint)(byte)param_2[1] << 2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar2[1] = uVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined8 *)(puVar2 + 0x1e) = 0;
  *(undefined8 *)(puVar2 + 0x1c) = 0;
  *(undefined8 *)(puVar2 + 0x22) = 0;
  *(undefined8 *)(puVar2 + 0x20) = 0;
  if (cVar1 != '\0') { // [自动静态注释] 条件判断/分支
    uVar3 = uVar3 | 8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puVar2[1] = uVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  if (*param_2 != '\0') { // [自动静态注释] 条件判断/分支
    uVar3 = uVar3 & 0xfffffffb | 2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puVar2[1] = uVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  if (param_2[3] != '\0') { // [自动静态注释] 条件判断/分支
    puVar2[1] = uVar3 | 0x10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  *(undefined8 *)(puVar2 + 2) = 0;
  *puVar2 = 0;
  *param_1 = (long)puVar2;
  return 0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


