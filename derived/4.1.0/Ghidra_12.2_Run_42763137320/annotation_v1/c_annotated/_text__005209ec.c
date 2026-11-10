/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_004209EC
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005209ec; name: FUN_.text__005209ec
 */


void FUN__text__005209ec(double *param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long *plVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  double dVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  double dVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  double dVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  double dVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar10; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  param_1[0xb3] = 0.0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined4 *)(param_1 + 0xb2) = 0x3f000000;
  param_1[0xb4] = 0.0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0xb5] = 0.0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0xb6] = 0.0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0xb7] = 0.0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0xb8] = 0.0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0xb9] = 0.0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0xba] = 0.0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined4 *)(param_1 + 0xbb) = 0;
  if (((long *)param_1[0x51] == (long *)0x0) || (*(long *)param_1[0x51] == -1)) { // [自动静态注释] 条件判断/分支
    uVar2 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    plVar1 = (long *)param_1[0x7f]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    FUN__text__00520734(param_1 + 0x25,param_1 + 0xb2); // [自动静态注释] 调用尚未恢复正式名称的函数
    uVar2 = 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    plVar1 = (long *)param_1[0x7f]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  if ((plVar1 != (long *)0x0) && (*plVar1 != -1)) { // [自动静态注释] 条件判断/分支
    FUN__text__00520734(param_1 + 0x53,param_1 + 0xb2); // [自动静态注释] 调用尚未恢复正式名称的函数
    uVar2 = uVar2 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  if (uVar2 == 0) { // [自动静态注释] 条件判断/分支
    *(undefined4 *)(param_1 + 0xbb) = *(undefined4 *)(param_1 + 8);
    param_1[0xb3] = *param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    param_1[0xb4] = param_1[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined4 *)((long)param_1 + 0x5d4) = *(undefined4 *)((long)param_1 + 0x3c);
    param_1[0xb5] = param_1[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    param_1[0xb6] = param_1[3]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined4 *)(param_1 + 0xb7) = *(undefined4 *)(param_1 + 4);
    *(undefined8 *)((long)param_1 + 0x5bc) = *(undefined8 *)((long)param_1 + 0x24);
    *(undefined4 *)((long)param_1 + 0x5c4) = *(undefined4 *)((long)param_1 + 0x2c);
    *(undefined4 *)(param_1 + 0xba) = *(undefined4 *)(param_1 + 7);
    param_1[0xb9] = param_1[6]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  if (uVar2 == 1) { // [自动静态注释] 条件判断/分支
    dVar3 = param_1[0xb3]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    dVar4 = param_1[0xb4]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    dVar5 = param_1[0xb5]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    dVar5 = 1.0 / (double)uVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    dVar3 = param_1[0xb3] * dVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    dVar4 = param_1[0xb4] * dVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    dVar5 = param_1[0xb5] * dVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar8 = 1.0 / (float)uVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    param_1[0xb3] = dVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    param_1[0xb4] = dVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    param_1[0xb5] = dVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(float *)(param_1 + 0xb6) = *(float *)(param_1 + 0xb6) * fVar8;
    *(float *)((long)param_1 + 0x5b4) = *(float *)((long)param_1 + 0x5b4) * fVar8;
    *(float *)(param_1 + 0xb7) = *(float *)(param_1 + 0xb7) * fVar8;
    *(float *)((long)param_1 + 0x5bc) = *(float *)((long)param_1 + 0x5bc) * fVar8;
    *(float *)(param_1 + 0xb8) = *(float *)(param_1 + 0xb8) * fVar8;
    *(float *)((long)param_1 + 0x5c4) = *(float *)((long)param_1 + 0x5c4) * fVar8;
    fVar7 = *(float *)((long)param_1 + 0x5cc) * fVar8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar6 = *(float *)(param_1 + 0xb9) * fVar8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar8 = *(float *)(param_1 + 0xba) * fVar8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar10 = SQRT(fVar6 * fVar6 + fVar7 * fVar7 + fVar8 * fVar8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (fVar10 == 0.0) { // [自动静态注释] 条件判断/分支
      fVar6 = 0.0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      fVar7 = 0.0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      fVar8 = 0.0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      fVar10 = 1.0 / fVar10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      fVar6 = fVar6 * fVar10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      fVar7 = fVar7 * fVar10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      fVar8 = fVar8 * fVar10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    *(float *)(param_1 + 0xb9) = fVar6;
    *(float *)((long)param_1 + 0x5cc) = fVar7;
    *(float *)(param_1 + 0xba) = fVar8;
    *(float *)((long)param_1 + 0x5d4) = *(float *)((long)param_1 + 0x5d4) * 0.5;
    *(float *)(param_1 + 0xbb) = *(float *)(param_1 + 0xbb) * 0.5;
  } // [自动静态注释] 作用域/控制流边界
  dVar9 = (double)*(float *)((long)param_1 + 0x44); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  dVar3 = dVar3 + (dVar9 * (double)*(float *)(param_1 + 6) - *param_1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  dVar4 = dVar4 + (dVar9 * (double)*(float *)((long)param_1 + 0x34) - param_1[1]); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  dVar5 = dVar5 + (dVar9 * (double)*(float *)(param_1 + 7) - param_1[2]); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(float *)(param_1 + 0xb2) =
       (float)(SQRT(dVar3 * dVar3 + dVar4 * dVar4 + dVar5 * dVar5) / (dVar9 + dVar9)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


