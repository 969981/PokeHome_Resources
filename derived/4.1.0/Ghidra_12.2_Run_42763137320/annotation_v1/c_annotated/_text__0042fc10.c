/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0032FC10
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0042fc10; name: FUN_.text__0042fc10
 */


bool FUN__text__0042fc10(undefined8 *param_1,uint param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  uint uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  byte bVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  uVar3 = *(uint *)(param_1 + 3); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar1 = *(uint *)((long)param_1 + 0x1c) + uVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (param_2 < uVar1) { // [自动静态注释] 条件判断/分支
    bVar4 = *(byte *)(param_1 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (((bVar4 >> 1 & 1) == 0) || (*(float *)((long)param_1 + 0x44) == 0.0)) { // [自动静态注释] 条件判断/分支
      fVar8 = 0.0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (uVar3 <= param_2 && param_2 - uVar3 != 0) { // [自动静态注释] 条件判断/分支
        fVar8 = (float)(param_2 - uVar3) / (float)*(uint *)((long)param_1 + 0x1c); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      *(float *)(param_1 + 4) = fVar8;
      fVar8 = (float)FUN__text__0042fd80(fVar8,*(undefined4 *)(param_1 + 1), // [自动静态注释] 调用尚未恢复正式名称的函数
                                         *(undefined4 *)((long)param_1 + 0xc),
                                         *(undefined4 *)(param_1 + 7));
      bVar4 = *(byte *)(param_1 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      fVar8 = *(float *)((long)param_1 + 0x14) + // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
              *(float *)((long)param_1 + 0x44) *
              (*(float *)(param_1 + 2) - *(float *)((long)param_1 + 0x14)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
    if ((bVar4 & 1) != 0) { // [自动静态注释] 条件判断/分支
      fVar2 = (float)((uint)fVar8 & 0x7fffff | 0x3f800000); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      fVar7 = fVar2 + 1.0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      fVar8 = ((float)((uint)fVar8 >> 0x17 & 0xff) * 0.30103 + -38.230812 + // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
              (fVar2 * 1.1581186 * fVar2 * fVar2 + -1.1581186) / (fVar7 * fVar7 * fVar7)) * 20.0; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    fVar8 = *(float *)((long)param_1 + 0x14); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  *(float *)(param_1 + 2) = fVar8;
  if (*(int *)(param_1 + 6) != 0) { // [自动静态注释] 条件判断/分支
    puVar5 = (undefined8 *)param_1[5]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    do { // [自动静态注释] 循环/迭代
      puVar6 = puVar5 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      (*(code *)**(undefined8 **)*puVar5)(fVar8,(undefined8 *)*puVar5,*param_1,uVar1 <= param_2); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      puVar5 = puVar6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (puVar6 != (undefined8 *)(param_1[5] + (ulong)*(uint *)(param_1 + 6) * 8)); // [自动静态注释] 循环/迭代
  } // [自动静态注释] 作用域/控制流边界
  return uVar1 <= param_2; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


