/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0047E7F0
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0057e7f0; name: FUN_.text__0057e7f0
 */


void FUN__text__0057e7f0(float param_1,float param_2,float param_3,float param_4,float param_5, // [自动静态注释] 调用尚未恢复正式名称的函数
                        float param_6,float *param_7,float *param_8,float *param_9,uint param_10) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义

{ // [自动静态注释] 作用域/控制流边界
  float fVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float *pfVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float *pfVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (((param_2 == param_1) && (param_4 == param_3)) && (param_6 == param_5)) { // [自动静态注释] 条件判断/分支
    if (param_10 != 0) { // [自动静态注释] 条件判断/分支
      pfVar3 = param_7; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      do { // [自动静态注释] 循环/迭代
        uVar5 = *(undefined8 *)param_8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        uVar6 = *(undefined8 *)param_9; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        pfVar4 = pfVar3 + 4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *(ulong *)(pfVar3 + 2) =
             CONCAT44((float)((ulong)*(undefined8 *)(pfVar3 + 2) >> 0x20) * param_1 + // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                      (float)((ulong)*(undefined8 *)(param_8 + 2) >> 0x20) * param_3 + // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                      (float)((ulong)*(undefined8 *)(param_9 + 2) >> 0x20) * param_5, // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                      (float)*(undefined8 *)(pfVar3 + 2) * param_1 + // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                      (float)*(undefined8 *)(param_8 + 2) * param_3 + // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                      (float)*(undefined8 *)(param_9 + 2) * param_5); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        *(ulong *)pfVar3 =
             CONCAT44((float)((ulong)*(undefined8 *)pfVar3 >> 0x20) * param_1 + // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                      (float)((ulong)uVar5 >> 0x20) * param_3 + // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                      (float)((ulong)uVar6 >> 0x20) * param_5, // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                      (float)*(undefined8 *)pfVar3 * param_1 + (float)uVar5 * param_3 + // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                      (float)uVar6 * param_5); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        pfVar3 = pfVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        param_8 = param_8 + 4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        param_9 = param_9 + 4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } while (pfVar4 < param_7 + param_10); // [自动静态注释] 循环/迭代
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  else if (param_10 != 0) { // [自动静态注释] 条件判断/分支
    param_2 = param_2 - param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    param_4 = param_4 - param_3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    param_6 = param_6 - param_5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar7 = 1.0 / (float)param_10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    pfVar3 = param_7; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    do { // [自动静态注释] 循环/迭代
      fVar8 = *pfVar3 * param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      param_1 = param_1 + param_2 * fVar7; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      fVar1 = param_3 * *param_8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      param_3 = param_3 + param_4 * fVar7; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      fVar2 = param_5 * *param_9; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      param_5 = param_5 + param_6 * fVar7; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      pfVar4 = pfVar3 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *pfVar3 = fVar8 + fVar1 + fVar2;
      pfVar3 = pfVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      param_8 = param_8 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      param_9 = param_9 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (pfVar4 < param_7 + param_10); // [自动静态注释] 循环/迭代
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


