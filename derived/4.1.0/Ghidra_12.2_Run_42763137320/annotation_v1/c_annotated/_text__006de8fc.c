/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_005DE8FC
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006de8fc; name: FUN_.text__006de8fc
 */


void FUN__text__006de8fc(undefined8 param_1,long param_2,float *param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined8 *puVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar10; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_50; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uStack_48; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar5 = *(long *)(param_2 + 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar7 = *(long *)(lVar5 + 0x418); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar6 = *(long *)(*(long *)(lVar5 + 0x238) + 0x338); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar2 = FUN__text__006eb01c(lVar5 + 0x7a8,*(undefined4 *)(lVar7 + 0x38)); // [自动静态注释] 调用尚未恢复正式名称的函数
  param_3[0x20] = *(float *)(param_2 + 0x18); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar8 = *(float *)(param_2 + 0x1c); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_3[0x1e] = 0.0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_3[0x21] = fVar8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar4 = *(long *)(param_2 + 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar1 = (undefined8 *)(*(long *)(lVar4 + 0x1f0) + (long)*(int *)(param_2 + 0x20) * 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uStack_48 = puVar1[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_50 = *puVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__006d9510(*(undefined4 *)(param_2 + 0x1c),*(undefined4 *)(param_2 + 0x18), // [自动静态注释] 调用尚未恢复正式名称的函数
                      *(undefined8 *)(lVar4 + 0x98),param_3,*(undefined8 *)(lVar4 + 0x238),&local_50
                     ); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uVar3 = FUN__text__006d9ff0(*(undefined4 *)(param_2 + 0x1c),*(undefined4 *)(param_2 + 0x18), // [自动静态注释] 调用尚未恢复正式名称的函数
                              *(undefined8 *)(*(long *)(param_2 + 0x10) + 0x98),param_3 + 4,
                              *(undefined8 *)(*(long *)(param_2 + 0x10) + 0x238),&local_50);
  uVar9 = *(undefined8 *)param_3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar10 = *(undefined8 *)(param_3 + 4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar8 = *(float *)(*(long *)(*(long *)(*(long *)(param_2 + 0x10) + 0x238) + 0x18) + 0x360); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *param_3 = fVar8 * (float)uVar9;
  param_3[1] = fVar8 * (float)((ulong)uVar9 >> 0x20); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_3[2] = fVar8 * (float)*(undefined8 *)(param_3 + 2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_3[4] = fVar8 * (float)uVar10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_3[5] = fVar8 * (float)((ulong)uVar10 >> 0x20); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_3[6] = fVar8 * (float)*(undefined8 *)(param_3 + 6); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar8 = param_3[0x22]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_3[0x22] = *(float *)(param_2 + 0x18); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar3 = FUN__text__006dea80(uVar3,param_2,param_3,lVar6, // [自动静态注释] 调用尚未恢复正式名称的函数
                              param_3[0x20] == 0.0 || // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                              0.0 < (float)(int)param_3[0x20] - (float)(int)fVar8); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  lVar2 = lVar2 + (long)(*(int *)(lVar7 + 0x20) * (int)param_3[0x1f]) * 0x50; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(int *)(lVar6 + 0x28) == 0) { // [自动静态注释] 条件判断/分支
    FUN__text__006e03d0(0,uVar3,lVar2,param_3,lVar5,lVar6); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    FUN__text__006e0700(0,uVar3,lVar2,param_3,lVar5,lVar6); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__006eb028(*(long *)(param_2 + 0x10) + 0x7a8); // [自动静态注释] 调用尚未恢复正式名称的函数
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


