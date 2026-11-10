/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0038CDB8
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0048cdb8; name: FUN_.text__0048cdb8
 */


undefined8 // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
FUN__text__0048cdb8(long *param_1,undefined4 param_2,undefined8 param_3,undefined8 *param_4, // [自动静态注释] 调用尚未恢复正式名称的函数
                   long param_5,undefined8 param_6,uint param_7,undefined4 param_8) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int *piVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  nn::os::LockMutex((MutexType *)(param_1 + 3)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  puVar3 = (undefined8 *)FUN__text__00400f80(0,0x70); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (puVar3 == (undefined8 *)0x0) { // [自动静态注释] 条件判断/分支
    uVar6 = 0x34; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    goto LAB__text__0048cefc; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  puVar3[3] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar3[4] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *puVar3 = 0;
  *(undefined4 *)(puVar3 + 4) = 1;
  *(undefined4 *)((long)puVar3 + 0x24) = param_8;
  puVar3[5] = param_3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar3[0xc] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar3[0xd] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar3[10] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar3[0xb] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar3[8] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar3[9] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined4 *)((long)puVar3 + 0x4c) = param_2;
  puVar3[6] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar3[7] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar3[1] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar3[2] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar3[8] = param_4[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined4 *)(puVar3 + 9) = *(undefined4 *)(param_4 + 2);
  piVar5 = (int *)*param_4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (piVar5 != (int *)0x0) { // [自动静态注释] 条件判断/分支
    *piVar5 = *piVar5 + 1;
  } // [自动静态注释] 作用域/控制流边界
  puVar3[7] = piVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar4 = param_7 & 0xfff02004; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (param_5 != 0) { // [自动静态注释] 条件判断/分支
    uVar4 = param_7; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  puVar3[10] = param_5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar3[0xb] = param_6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(uint *)(puVar3 + 0xc) = uVar4;
  uVar4 = *(uint *)(param_1 + 1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if ((uVar4 == 0) || (fVar7 = (float)NEON_ucvtf((int)param_1[2]), 0.9 < fVar7 / (float)uVar4)) { // [自动静态注释] 条件判断/分支
    FUN__text__0048e330(param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
    uVar4 = *(uint *)(param_1 + 1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (uVar4 != 0) goto LAB__text__0048cec0; // [自动静态注释] 条件判断/分支
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
LAB__text__0048cec0: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    uVar2 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (uVar4 != 0) { // [自动静态注释] 条件判断/分支
      uVar2 = *(uint *)((long)puVar3 + 0x4c) / uVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    lVar1 = (ulong)(*(uint *)((long)puVar3 + 0x4c) - uVar2 * uVar4) * 8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puVar3[0xd] = *(undefined8 *)(*param_1 + lVar1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined8 **)(*param_1 + lVar1) = puVar3;
    *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  } // [自动静态注释] 作用域/控制流边界
  uVar6 = 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
LAB__text__0048cefc: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  nn::os::UnlockMutex((MutexType *)(param_1 + 3)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  return uVar6; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


