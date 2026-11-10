/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_002FBCD4
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003fbcd4; name: FUN_.text__003fbcd4
 */


undefined8 // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
FUN__text__003fbcd4(long param_1,long param_2,long *param_3,undefined4 param_4,float *param_5, // [自动静态注释] 调用尚未恢复正式名称的函数
                   undefined8 param_6,uint param_7) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义

{ // [自动静态注释] 作用域/控制流边界
  byte bVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  *(long *)(param_1 + 0x50) = param_2;
  if (*param_3 < 0) { // [自动静态注释] 条件判断/分支
    uVar6 = 0x1f; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    *(undefined4 *)(param_1 + 0x80) = param_4;
    uVar4 = (**(code **)(**(long **)(param_2 + 0x610) + 0x18))(*(long **)(param_2 + 0x610),param_3); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (uVar4 - 1 < param_7) { // [自动静态注释] 条件判断/分支
      uVar3 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (uVar4 != 0) { // [自动静态注释] 条件判断/分支
        uVar3 = param_7 / uVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      if (param_7 == uVar3 * uVar4) { // [自动静态注释] 条件判断/分支
        *(uint *)(param_1 + 0x60) = uVar4;
        *(uint *)(param_1 + 0xa0) = uVar4;
        fVar7 = *param_5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        if (fVar7 <= 1.0) { // [自动静态注释] 条件判断/分支
          fVar7 = 1.0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        } // [自动静态注释] 作用域/控制流边界
        *(float *)(param_1 + 0x84) = fVar7;
        uVar3 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        if (uVar4 != 0) { // [自动静态注释] 条件判断/分支
          uVar3 = (uint)param_5[1] / uVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        } // [自动静态注释] 作用域/控制流边界
        *(uint *)(param_1 + 0x8c) = uVar3 * uVar4;
        fVar7 = (float)*param_3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        if ((long)(ulong)(uint)param_5[2] <= *param_3) { // [自动静态注释] 条件判断/分支
          fVar7 = param_5[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        } // [自动静态注释] 作用域/控制流边界
        *(float *)(param_1 + 0x90) = fVar7;
        bVar1 = *(byte *)(param_5 + 3); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        if (bVar1 < 2) { // [自动静态注释] 条件判断/分支
          bVar1 = 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        } // [自动静态注释] 作用域/控制流边界
        *(byte *)(param_1 + 0xc1) = bVar1;
        uVar2 = *(undefined1 *)((long)param_5 + 0xd); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *(undefined8 *)(param_1 + 0x78) = 0;
        *(undefined1 *)(param_1 + 100) = uVar2;
        if (*param_3 == 0) { // [自动静态注释] 条件判断/分支
          *(undefined1 *)(param_1 + 0x6c) = 0;
          *(undefined1 *)(param_1 + 0x67) = 1;
          uVar6 = FUN__text__003fbe20(param_1,param_6,param_7); // [自动静态注释] 调用尚未恢复正式名称的函数
          iVar5 = (int)uVar6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        } // [自动静态注释] 作用域/控制流边界
        else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          uVar6 = FUN__text__003fbe20(param_1,param_6,param_7); // [自动静态注释] 调用尚未恢复正式名称的函数
          iVar5 = (int)uVar6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        } // [自动静态注释] 作用域/控制流边界
        if (iVar5 == 1) { // [自动静态注释] 条件判断/分支
          return uVar6; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
        } // [自动静态注释] 作用域/控制流边界
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
    uVar6 = 2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  *(undefined1 *)(param_1 + 0x6c) = 0;
  *(undefined1 *)(param_1 + 0x68) = 1;
  return uVar6; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


