/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0044F710
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0054f710; name: FUN_.text__0054f710
 */


void FUN__text__0054f710(float param_1,float param_2,float param_3,float param_4,float *param_5, // [自动静态注释] 调用尚未恢复正式名称的函数
                        float *param_6,uint param_7) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义

{ // [自动静态注释] 作用域/控制流边界
  float fVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float *pfVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float *pfVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar10; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar11; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar12; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if ((param_2 == param_1) && (param_4 == param_3)) { // [自动静态注释] 条件判断/分支
    pfVar3 = param_5 + param_7; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if ((param_7 & 0x1f) == 0) { // [自动静态注释] 条件判断/分支
      if (param_7 != 0) { // [自动静态注释] 条件判断/分支
        do { // [自动静态注释] 循环/迭代
          uVar4 = *(undefined8 *)param_6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          uVar6 = *(undefined8 *)(param_6 + 6); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          uVar5 = *(undefined8 *)(param_6 + 4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          uVar9 = *(undefined8 *)(param_6 + 10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          uVar8 = *(undefined8 *)(param_6 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          uVar11 = *(undefined8 *)(param_6 + 0xe); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          uVar10 = *(undefined8 *)(param_6 + 0xc); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          *(ulong *)(param_5 + 2) =
               CONCAT44((float)((ulong)*(undefined8 *)(param_6 + 2) >> 0x20) * param_4 + // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                        (float)((ulong)*(undefined8 *)(param_5 + 2) >> 0x20) * param_2, // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                        (float)*(undefined8 *)(param_6 + 2) * param_4 + // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                        (float)*(undefined8 *)(param_5 + 2) * param_2); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          *(ulong *)param_5 =
               CONCAT44((float)((ulong)uVar4 >> 0x20) * param_4 + // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                        (float)((ulong)*(undefined8 *)param_5 >> 0x20) * param_2, // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                        (float)uVar4 * param_4 + (float)*(undefined8 *)param_5 * param_2); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          *(ulong *)(param_5 + 6) =
               CONCAT44((float)((ulong)uVar6 >> 0x20) * param_4 + // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                        (float)((ulong)*(undefined8 *)(param_5 + 6) >> 0x20) * param_2, // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                        (float)uVar6 * param_4 + (float)*(undefined8 *)(param_5 + 6) * param_2); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          *(ulong *)(param_5 + 4) =
               CONCAT44((float)((ulong)uVar5 >> 0x20) * param_4 + // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                        (float)((ulong)*(undefined8 *)(param_5 + 4) >> 0x20) * param_2, // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                        (float)uVar5 * param_4 + (float)*(undefined8 *)(param_5 + 4) * param_2); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          uVar5 = *(undefined8 *)(param_6 + 0x12); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          uVar4 = *(undefined8 *)(param_6 + 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          uVar12 = *(undefined8 *)(param_6 + 0x16); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          uVar6 = *(undefined8 *)(param_6 + 0x14); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          *(ulong *)(param_5 + 10) =
               CONCAT44((float)((ulong)uVar9 >> 0x20) * param_4 + // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                        (float)((ulong)*(undefined8 *)(param_5 + 10) >> 0x20) * param_2, // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                        (float)uVar9 * param_4 + (float)*(undefined8 *)(param_5 + 10) * param_2); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          *(ulong *)(param_5 + 8) =
               CONCAT44((float)((ulong)uVar8 >> 0x20) * param_4 + // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                        (float)((ulong)*(undefined8 *)(param_5 + 8) >> 0x20) * param_2, // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                        (float)uVar8 * param_4 + (float)*(undefined8 *)(param_5 + 8) * param_2); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          *(ulong *)(param_5 + 0xe) =
               CONCAT44((float)((ulong)uVar11 >> 0x20) * param_4 + // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                        (float)((ulong)*(undefined8 *)(param_5 + 0xe) >> 0x20) * param_2, // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                        (float)uVar11 * param_4 + (float)*(undefined8 *)(param_5 + 0xe) * param_2); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          *(ulong *)(param_5 + 0xc) =
               CONCAT44((float)((ulong)uVar10 >> 0x20) * param_4 + // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                        (float)((ulong)*(undefined8 *)(param_5 + 0xc) >> 0x20) * param_2, // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                        (float)uVar10 * param_4 + (float)*(undefined8 *)(param_5 + 0xc) * param_2); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          *(ulong *)(param_5 + 0x12) =
               CONCAT44((float)((ulong)uVar5 >> 0x20) * param_4 + // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                        (float)((ulong)*(undefined8 *)(param_5 + 0x12) >> 0x20) * param_2, // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                        (float)uVar5 * param_4 + (float)*(undefined8 *)(param_5 + 0x12) * param_2); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          *(ulong *)(param_5 + 0x10) =
               CONCAT44((float)((ulong)uVar4 >> 0x20) * param_4 + // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                        (float)((ulong)*(undefined8 *)(param_5 + 0x10) >> 0x20) * param_2, // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                        (float)uVar4 * param_4 + (float)*(undefined8 *)(param_5 + 0x10) * param_2); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          *(ulong *)(param_5 + 0x16) =
               CONCAT44((float)((ulong)uVar12 >> 0x20) * param_4 + // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                        (float)((ulong)*(undefined8 *)(param_5 + 0x16) >> 0x20) * param_2, // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                        (float)uVar12 * param_4 + (float)*(undefined8 *)(param_5 + 0x16) * param_2); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          *(ulong *)(param_5 + 0x14) =
               CONCAT44((float)((ulong)uVar6 >> 0x20) * param_4 + // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                        (float)((ulong)*(undefined8 *)(param_5 + 0x14) >> 0x20) * param_2, // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                        (float)uVar6 * param_4 + (float)*(undefined8 *)(param_5 + 0x14) * param_2); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          pfVar2 = param_6 + 0x1a; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          uVar4 = *(undefined8 *)(param_6 + 0x18); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          uVar6 = *(undefined8 *)(param_6 + 0x1e); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          uVar5 = *(undefined8 *)(param_6 + 0x1c); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          param_6 = param_6 + 0x20; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          *(ulong *)(param_5 + 0x1a) =
               CONCAT44((float)((ulong)*(undefined8 *)pfVar2 >> 0x20) * param_4 + // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                        (float)((ulong)*(undefined8 *)(param_5 + 0x1a) >> 0x20) * param_2, // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                        (float)*(undefined8 *)pfVar2 * param_4 + // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                        (float)*(undefined8 *)(param_5 + 0x1a) * param_2); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          *(ulong *)(param_5 + 0x18) =
               CONCAT44((float)((ulong)uVar4 >> 0x20) * param_4 + // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                        (float)((ulong)*(undefined8 *)(param_5 + 0x18) >> 0x20) * param_2, // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                        (float)uVar4 * param_4 + (float)*(undefined8 *)(param_5 + 0x18) * param_2); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          *(ulong *)(param_5 + 0x1e) =
               CONCAT44((float)((ulong)uVar6 >> 0x20) * param_4 + // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                        (float)((ulong)*(undefined8 *)(param_5 + 0x1e) >> 0x20) * param_2, // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                        (float)uVar6 * param_4 + (float)*(undefined8 *)(param_5 + 0x1e) * param_2); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          *(ulong *)(param_5 + 0x1c) =
               CONCAT44((float)((ulong)uVar5 >> 0x20) * param_4 + // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                        (float)((ulong)*(undefined8 *)(param_5 + 0x1c) >> 0x20) * param_2, // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                        (float)uVar5 * param_4 + (float)*(undefined8 *)(param_5 + 0x1c) * param_2); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          param_5 = param_5 + 0x20; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        } while (param_5 < pfVar3); // [自动静态注释] 循环/迭代
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
    else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      do { // [自动静态注释] 循环/迭代
        uVar4 = *(undefined8 *)param_6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        pfVar2 = param_5 + 4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *(ulong *)(param_5 + 2) =
             CONCAT44((float)((ulong)*(undefined8 *)(param_6 + 2) >> 0x20) * param_4 + // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                      (float)((ulong)*(undefined8 *)(param_5 + 2) >> 0x20) * param_2, // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                      (float)*(undefined8 *)(param_6 + 2) * param_4 + // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                      (float)*(undefined8 *)(param_5 + 2) * param_2); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        *(ulong *)param_5 =
             CONCAT44((float)((ulong)uVar4 >> 0x20) * param_4 + // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                      (float)((ulong)*(undefined8 *)param_5 >> 0x20) * param_2, // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                      (float)uVar4 * param_4 + (float)*(undefined8 *)param_5 * param_2); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        param_5 = pfVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        param_6 = param_6 + 4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } while (pfVar2 < pfVar3); // [自动静态注释] 循环/迭代
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  else if (param_7 != 0) { // [自动静态注释] 条件判断/分支
    param_2 = param_2 - param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    param_4 = param_4 - param_3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    pfVar3 = param_5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    do { // [自动静态注释] 循环/迭代
      fVar7 = *pfVar3 * param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      param_1 = param_1 + param_2 / (float)param_7; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      fVar1 = param_3 * *param_6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      param_3 = param_3 + param_4 / (float)param_7; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      pfVar2 = pfVar3 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *pfVar3 = fVar7 + fVar1;
      pfVar3 = pfVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      param_6 = param_6 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (pfVar2 < param_5 + param_7); // [自动静态注释] 循环/迭代
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


