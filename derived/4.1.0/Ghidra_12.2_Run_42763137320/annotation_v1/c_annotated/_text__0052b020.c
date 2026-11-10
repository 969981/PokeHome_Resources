/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0042B020
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0052b020; name: FUN_.text__0052b020
 */


void FUN__text__0052b020(undefined8 param_1,undefined1 param_2 [16],undefined8 param_3,long param_4, // [自动静态注释] 调用尚未恢复正式名称的函数
                        long param_5,uint param_6,ulong param_7) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义

{ // [自动静态注释] 作用域/控制流边界
  undefined8 *puVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_70; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uStack_68; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_60; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_58; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uStack_50; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_48; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  uVar8 = param_2._4_4_; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar7 = param_2._0_4_; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uStack_50 = param_2._0_8_; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar5 = (undefined8 *)(param_4 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(int *)(param_4 + 0xf8) != 0) { // [自动静态注释] 条件判断/分支
    puVar5 = (undefined8 *)(param_4 + (ulong)(*(int *)(param_4 + 0xf8) - 1) * 0x18 + 0x20); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  local_70 = *puVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uStack_68 = puVar5[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_60 = puVar5[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_58 = param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_48 = param_3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (param_6 < *(int *)(param_5 + 0x80) - 1U) { // [自动静态注释] 条件判断/分支
    uVar3 = (ulong)param_6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar4 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puVar5 = (undefined8 *)(param_5 + uVar3 * 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if ((param_7 & 1) == 0) { // [自动静态注释] 条件判断/分支
      do { // [自动静态注释] 循环/迭代
        puVar1 = puVar5 + lVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        local_70 = FUN__text__0052acf0(param_4,&local_70,puVar1[1],*(undefined8 *)(puVar1[8] + 0x78) // [自动静态注释] 调用尚未恢复正式名称的函数
                                       ,*puVar1); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        lVar4 = lVar4 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        uStack_68 = CONCAT44(uVar8,uVar7); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        local_60 = param_3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } while (uVar3 + lVar4 < (ulong)(*(int *)(param_5 + 0x80) - 1)); // [自动静态注释] 循环/迭代
    } // [自动静态注释] 作用域/控制流边界
    else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      do { // [自动静态注释] 循环/迭代
        lVar2 = FUN__text__00527e90(puVar5[9],*puVar5,puVar5[1]); // [自动静态注释] 调用尚未恢复正式名称的函数
        if (lVar2 == 0) { // [自动静态注释] 条件判断/分支
          local_70 = FUN__text__0052acf0(param_4,&local_70,puVar5[1], // [自动静态注释] 调用尚未恢复正式名称的函数
                                         *(undefined8 *)(puVar5[8] + 0x78),*puVar5);
          uStack_68 = CONCAT44(uVar8,uVar7); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          local_60 = param_3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        } // [自动静态注释] 作用域/控制流边界
        else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          FUN__text__0052aed8(param_4,lVar2,*puVar5,puVar5[1],*(undefined8 *)(puVar5[8] + 0x78), // [自动静态注释] 调用尚未恢复正式名称的函数
                              *(undefined8 *)(puVar5[9] + 0x78));
        } // [自动静态注释] 作用域/控制流边界
        lVar4 = lVar4 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        puVar5 = puVar5 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } while (uVar3 + lVar4 < (ulong)(*(int *)(param_5 + 0x80) - 1)); // [自动静态注释] 循环/迭代
    } // [自动静态注释] 作用域/控制流边界
    param_6 = param_6 + (int)lVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  puVar5 = (undefined8 *)(param_5 + (ulong)param_6 * 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__0052acf0(param_4,&local_70,&local_58,*(undefined8 *)(puVar5[8] + 0x78),*puVar5); // [自动静态注释] 调用尚未恢复正式名称的函数
  fVar6 = *(float *)(param_4 + 0x108); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(float *)(param_4 + 0x108) <= *(float *)(param_5 + 0x88)) { // [自动静态注释] 条件判断/分支
    fVar6 = *(float *)(param_5 + 0x88); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  *(undefined8 *)(param_4 + 0xe0) = local_58;
  *(undefined8 *)(param_4 + 0xe8) = uStack_50;
  *(undefined8 *)(param_4 + 0xf0) = local_48;
  *(float *)(param_4 + 0x108) = fVar6;
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


