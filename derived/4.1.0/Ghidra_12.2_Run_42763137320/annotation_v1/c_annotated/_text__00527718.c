/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00427718
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00527718; name: FUN_.text__00527718
 */


void FUN__text__00527718(float param_1,double *param_2,long param_3,undefined8 param_4,long param_5) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined4 *puVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  double dVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  double dVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar10; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  double dVar11; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uVar12; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uVar13; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uVar14; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uVar15; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uVar16; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_68; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  double local_60; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_58; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  puVar1 = (undefined4 *)FUN__text__00492bb0(param_4,2,1); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (puVar1 != (undefined4 *)0x0) { // [自动静态注释] 条件判断/分支
    local_68 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_60 = 0.0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_58 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar2 = *(long *)(*(long *)(param_5 + 8) + 0x38); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar4 = *(float *)(lVar2 + 0x90) + // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            *(float *)(lVar2 + 0x98) * (*(float *)(lVar2 + 0x78) - *(float *)(lVar2 + 0x90));
    fVar5 = *(float *)((long)param_2 + 0xa4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (*(float *)((long)param_2 + 0xa4) <= fVar4) { // [自动静态注释] 条件判断/分支
      fVar5 = fVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    fVar4 = (float)FUN__text__00527960(*(undefined4 *)(param_2 + 3), // [自动静态注释] 调用尚未恢复正式名称的函数
                                       *(undefined4 *)((long)param_2 + 0x1c),
                                       *(undefined4 *)(param_2 + 4),
                                       *(undefined4 *)((long)param_2 + 0x24),
                                       *(undefined4 *)(param_2 + 5),
                                       *(undefined4 *)((long)param_2 + 0x2c),&local_68);
    uVar12 = *(undefined4 *)((long)param_2 + 0x34); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar13 = *(undefined4 *)(param_2 + 7); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar16 = *(undefined4 *)((long)param_2 + 0x2c); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar14 = *(undefined4 *)((long)param_2 + 0x24); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar15 = *(undefined4 *)(param_2 + 5); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar3 = *(undefined8 *)(*(long *)(param_5 + 8) + 0x58); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *puVar1 = *(undefined4 *)(param_2 + 6);
    puVar1[1] = uVar12; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puVar1[2] = uVar13; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puVar1[3] = uVar14; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined8 *)(puVar1 + 6) = local_68;
    *(double *)(puVar1 + 8) = local_60;
    puVar1[4] = uVar15; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puVar1[5] = uVar16; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined8 *)(puVar1 + 10) = local_58;
    *(undefined8 *)(puVar1 + 0x12) = 0;
    puVar1[0x17] = 0x42c80000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined8 *)(puVar1 + 0x1c) = uVar3;
    puVar1[0x19] = 0xffffffff; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puVar1[0x1a] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puVar1[0x14] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    dVar8 = (double)(ulong)(uint)(fVar5 * 100.0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puVar1[0x15] = fVar5 * 100.0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puVar1[0x16] = fVar4 * 15.915494; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    dVar11 = local_60; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    FUN__text__00480e64(param_5,*(undefined8 *)(param_3 + 8),puVar1); // [自动静态注释] 调用尚未恢复正式名称的函数
    if (*(long *)(param_5 + 0x98) != 0) { // [自动静态注释] 条件判断/分支
      dVar6 = (double)FUN__text__0047da2c(param_5); // [自动静态注释] 调用尚未恢复正式名称的函数
      fVar4 = (float)(dVar8 - param_2[1]); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      fVar5 = (float)(dVar6 - *param_2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      fVar9 = (float)(dVar11 - param_2[2]); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      fVar7 = ABS(*(float *)(param_2 + 3) * fVar5 + fVar4 * *(float *)((long)param_2 + 0x1c) + // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                  fVar9 * *(float *)(param_2 + 4)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      fVar10 = ABS(*(float *)((long)param_2 + 0x24) * fVar5 + fVar4 * *(float *)(param_2 + 5) + // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                   fVar9 * *(float *)((long)param_2 + 0x2c)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      fVar5 = ABS(*(float *)(param_2 + 6) * fVar5 + fVar4 * *(float *)((long)param_2 + 0x34) + // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                  fVar9 * *(float *)(param_2 + 7)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      fVar4 = fVar7 - *(float *)((long)param_2 + 0x3c); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      fVar4 = fVar4 * fVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (fVar7 <= *(float *)((long)param_2 + 0x3c)) { // [自动静态注释] 条件判断/分支
        fVar4 = 0.0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      fVar7 = fVar10 - *(float *)(param_2 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      fVar7 = fVar7 * fVar7; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (fVar10 <= *(float *)(param_2 + 8)) { // [自动静态注释] 条件判断/分支
        fVar7 = -0.0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      fVar9 = fVar5 - *(float *)((long)param_2 + 0x44); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      fVar9 = fVar9 * fVar9; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (fVar5 <= *(float *)((long)param_2 + 0x44)) { // [自动静态注释] 条件判断/分支
        fVar9 = -0.0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      FUN__text__00480e30(SQRT(fVar7 + fVar4 + fVar9),param_5,*(undefined8 *)(param_3 + 8),puVar1); // [自动静态注释] 调用尚未恢复正式名称的函数
    } // [自动静态注释] 作用域/控制流边界
    fVar5 = *(float *)((long)param_2 + 0xa4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (*(float *)((long)param_2 + 0xa4) <= param_1) { // [自动静态注释] 条件判断/分支
      fVar5 = param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    FUN__text__00527200(fVar5,param_2,param_3,10,param_4); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


