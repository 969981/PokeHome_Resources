/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_004169EC
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005169ec; name: FUN_.text__005169ec
 */


void FUN__text__005169ec(long param_1,undefined8 *param_2,float *param_3,float *param_4, // [自动静态注释] 调用尚未恢复正式名称的函数
                        undefined8 param_5) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义

{ // [自动静态注释] 作用域/控制流边界
  undefined8 uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  uVar1 = *param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 1);
  *(undefined8 *)(param_1 + 4) = uVar1;
  fVar2 = *param_3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar3 = param_3[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar4 = param_3[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined8 *)(param_1 + 0x40) = param_5;
  *(undefined8 *)(param_1 + 0x48) = param_5;
  fVar3 = fVar3 - *(float *)(param_1 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar2 = fVar2 - *(float *)(param_1 + 4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar4 = fVar4 - *(float *)(param_1 + 0xc); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar7 = SQRT(fVar2 * fVar2 + fVar3 * fVar3 + fVar4 * fVar4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(float *)(param_1 + 0x50) = fVar7;
  fVar7 = 1.0 / fVar7; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar2 = fVar7 * fVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar3 = fVar7 * fVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar7 = fVar7 * fVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(float *)(param_1 + 0x10) = fVar2;
  *(float *)(param_1 + 0x14) = fVar3;
  *(float *)(param_1 + 0x18) = fVar7;
  fVar5 = param_4[1] - *(float *)(param_1 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar4 = *param_4 - *(float *)(param_1 + 4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar6 = param_4[2] - *(float *)(param_1 + 0xc); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar8 = fVar4 * fVar2 + fVar3 * fVar5 + fVar7 * fVar6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar4 = fVar4 - fVar2 * fVar8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar5 = fVar5 - fVar3 * fVar8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar6 = fVar6 - fVar7 * fVar8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar8 = SQRT(fVar4 * fVar4 + fVar5 * fVar5 + fVar6 * fVar6); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (fVar8 == 0.0) { // [自动静态注释] 条件判断/分支
    fVar4 = 0.0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar5 = 0.0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar6 = 0.0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    fVar8 = 1.0 / fVar8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar4 = fVar4 * fVar8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar5 = fVar5 * fVar8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar6 = fVar6 * fVar8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  *(float *)(param_1 + 0x1c) = fVar3 * fVar6 - fVar7 * fVar5;
  *(float *)(param_1 + 0x20) = fVar7 * fVar4 - fVar6 * fVar2;
  *(float *)(param_1 + 0x24) = fVar5 * fVar2 - fVar3 * fVar4;
  *(float *)(param_1 + 0x28) = fVar7 * fVar5 - fVar3 * fVar6;
  *(float *)(param_1 + 0x2c) = fVar6 * fVar2 - fVar7 * fVar4;
  *(float *)(param_1 + 0x30) = fVar3 * fVar4 - fVar5 * fVar2;
  FUN__text__00516af0(); // [自动静态注释] 调用尚未恢复正式名称的函数
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


