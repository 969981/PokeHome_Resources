/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0030775C
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0040775c; name: FUN_.text__0040775c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0040775c(long *param_1,undefined8 param_2,long param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined4 *puVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  puVar1 = (undefined4 *)(param_3 + 0x60); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(char *)(param_3 + 0x558) != '\0') { // [自动静态注释] 条件判断/分支
    puVar1 = (undefined4 *)(param_3 + 0x90); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  uVar2 = *puVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined2 *)((long)param_1 + 0x32) = 0;
  lVar5 = _DAT_008a49b8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[2] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[3] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined8 *)((long)param_1 + 0x3c) = 0x3f800000ffffffff;
  *(undefined8 *)((long)param_1 + 0x44) = 0x1ffffffff;
  *param_1 = lVar5 + 0x10;
  param_1[1] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined8 *)((long)param_1 + 0x34) = 0;
  uVar3 = _DAT_008ab03c; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[4] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(short *)(param_1 + 6) = (short)uVar3;
  *(undefined4 *)(param_1 + 5) = uVar2;
  *(undefined4 *)((long)param_1 + 0x2c) = 0x2b;
  FUN__text__0041ec00(); // [自动静态注释] 调用尚未恢复正式名称的函数
  param_1[10] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *param_1 = 0x8870a8;
  puVar4 = (undefined8 *)FUN__text__004e0478(); // [自动静态注释] 调用尚未恢复正式名称的函数
  puVar1 = (undefined4 *)(param_3 + 0x60); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(char *)(param_3 + 0x558) != '\0') { // [自动静态注释] 条件判断/分支
    puVar1 = (undefined4 *)(param_3 + 0x90); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  lVar5 = (**(code **)*puVar4)(puVar4,param_2,*_DAT_008a4b68,0x10,1,*puVar1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[10] = lVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


