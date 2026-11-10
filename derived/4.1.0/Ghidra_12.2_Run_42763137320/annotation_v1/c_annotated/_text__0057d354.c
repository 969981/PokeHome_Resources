/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0047D354
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0057d354; name: FUN_.text__0057d354
 */


undefined8 // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
FUN__text__0057d354(float param_1,float param_2,long param_3,undefined8 param_4,uint *param_5, // [自动静态注释] 调用尚未恢复正式名称的函数
                   uint param_6) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义

{ // [自动静态注释] 作用域/控制流边界
  undefined8 uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  double dVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  double dVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  double dVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  double dVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  dVar4 = 1.0 - (double)param_2 * (double)param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  dVar2 = (double)NEON_ucvtf((ulong)param_5[3]); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  dVar2 = (dVar2 * -1.7269388197455346) / ((double)param_6 * (double)param_1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (1.0 < dVar2 * dVar4) { // [自动静态注释] 条件判断/分支
    dVar4 = 1.0 / dVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  uVar1 = FUN__text__0057c744(param_3,param_4,*param_5); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (((((int)uVar1 == 1) && // [自动静态注释] 条件判断/分支
       (uVar1 = FUN__text__0057c744(param_3 + 0x18,param_4,param_5[1]), (int)uVar1 == 1)) && // [自动静态注释] 调用尚未恢复正式名称的函数
      (uVar1 = FUN__text__0057c744(param_3 + 0x30,param_4,param_5[2]), (int)uVar1 == 1)) && // [自动静态注释] 调用尚未恢复正式名称的函数
     (uVar1 = FUN__text__0057c744(param_3 + 0x48,param_4,param_5[3]), (int)uVar1 == 1)) { // [自动静态注释] 调用尚未恢复正式名称的函数
    dVar3 = 1.0 / ((double)param_6 * (double)param_1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    dVar2 = (double)NEON_ucvtf((ulong)*param_5); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    dVar2 = dVar2 * -3.0 * dVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    dVar4 = 0.5756462732485116 - // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            (double)(float)SQRT(1.0 - dVar4) * (double)(float)SQRT(1.0 - dVar4) * 0.5756462732485116 // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    ; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    dVar5 = (double)NEON_fminnm(dVar2 * dVar4,0x3feff7ced916872b); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    dVar2 = exp2(dVar2 * 3.321928094887362); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(float *)(param_3 + 100) = (float)(dVar2 - dVar2 * dVar5);
    *(float *)(param_3 + 0x68) = -(float)dVar5;
    dVar2 = (double)NEON_ucvtf((ulong)param_5[1]); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    dVar2 = dVar2 * -3.0 * dVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    dVar5 = (double)NEON_fminnm(dVar2 * dVar4,0x3feff7ced916872b); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    dVar2 = exp2(dVar2 * 3.321928094887362); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(float *)(param_3 + 0x70) = (float)(dVar2 - dVar2 * dVar5);
    *(float *)(param_3 + 0x74) = -(float)dVar5;
    dVar2 = (double)NEON_ucvtf((ulong)param_5[2]); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    dVar2 = dVar2 * -3.0 * dVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    dVar5 = (double)NEON_fminnm(dVar2 * dVar4,0x3feff7ced916872b); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    dVar2 = exp2(dVar2 * 3.321928094887362); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(float *)(param_3 + 0x7c) = (float)(dVar2 - dVar2 * dVar5);
    *(float *)(param_3 + 0x80) = -(float)dVar5;
    dVar2 = (double)NEON_ucvtf((ulong)param_5[3]); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    dVar3 = dVar2 * -3.0 * dVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    dVar4 = (double)NEON_fminnm(dVar3 * dVar4,0x3feff7ced916872b); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    dVar2 = exp2(dVar3 * 3.321928094887362); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar1 = 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(float *)(param_3 + 0x88) = (float)(dVar2 - dVar2 * dVar4);
    *(float *)(param_3 + 0x8c) = -(float)dVar4;
  } // [自动静态注释] 作用域/控制流边界
  return uVar1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


