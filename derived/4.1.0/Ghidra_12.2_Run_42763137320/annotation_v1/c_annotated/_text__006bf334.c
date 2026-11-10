/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_005BF334
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006bf334; name: FUN_.text__006bf334
 */


void FUN__text__006bf334(long param_1,long *param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  ushort uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ushort uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ushort uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if ((param_2 == (long *)0x0) || (iVar2 = (**(code **)(*param_2 + 0xc0))(param_2), iVar2 == 1)) { // [自动静态注释] 条件判断/分支
    uVar1 = *(ushort *)(param_1 + 0x114); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar4 = uVar1 >> 2 & 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (*(long **)(param_1 + 0xf0) != param_2) { // [自动静态注释] 条件判断/分支
      uVar4 = 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    uVar3 = 4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (uVar4 == 0) { // [自动静态注释] 条件判断/分支
      uVar3 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    *(ushort *)(param_1 + 0x114) = uVar3 | uVar1 & 0xfffb;
    if (*(long **)(param_1 + 0xf0) != param_2) { // [自动静态注释] 条件判断/分支
      *(long **)(param_1 + 0xf0) = param_2;
      if (param_2 == (long *)0x0) { // [自动静态注释] 条件判断/分支
        *(ushort *)(param_1 + 0x114) = uVar1 | 4;
        if ((*(float *)(param_1 + 0xf8) != 0.0) || (*(float *)(param_1 + 0xfc) != 0.0)) { // [自动静态注释] 条件判断/分支
          if (*(float *)(param_1 + 0xfc) == 0.0) { // [自动静态注释] 条件判断/分支
            *(undefined8 *)(param_1 + 0xf8) = 0;
            return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
          } // [自动静态注释] 作用域/控制流边界
          *(undefined8 *)(param_1 + 0xf8) = 0;
          *(undefined4 *)(param_1 + 0x118) = 0x7fc00000;
          *(undefined4 *)(param_1 + 0x134) = 0x7fc00000;
          return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
        } // [自动静态注释] 作用域/控制流边界
      } // [自动静态注释] 作用域/控制流边界
      else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        iVar2 = (**(code **)(*param_2 + 0x20))(param_2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        fVar8 = (float)iVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        iVar2 = (**(code **)(**(long **)(param_1 + 0xf0) + 0x28))(); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        fVar5 = (float)iVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        fVar6 = *(float *)(param_1 + 0xf8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        fVar7 = *(float *)(param_1 + 0xfc); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        uVar4 = 4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        if ((fVar7 == fVar5 && fVar6 == fVar8) && (*(ushort *)(param_1 + 0x114) & 4) == 0) { // [自动静态注释] 条件判断/分支
          uVar4 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        } // [自动静态注释] 作用域/控制流边界
        *(ushort *)(param_1 + 0x114) = uVar4 | *(ushort *)(param_1 + 0x114) & 0xfffb;
        if (fVar7 != fVar5 || fVar6 != fVar8) { // [自动静态注释] 条件判断/分支
          if (fVar7 != 0.0) { // [自动静态注释] 条件判断/分支
            *(ulong *)(param_1 + 0xf8) = CONCAT44(fVar5,fVar8);
            *(float *)(param_1 + 0x118) =
                 (fVar5 / fVar8) * (fVar6 / fVar7) * *(float *)(param_1 + 0x118); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
            *(float *)(param_1 + 0x134) =
                 (fVar5 / fVar8) * (fVar6 / fVar7) * *(float *)(param_1 + 0x134); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
            return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
          } // [自动静态注释] 作用域/控制流边界
          *(float *)(param_1 + 0xf8) = fVar8;
          *(float *)(param_1 + 0xfc) = fVar5;
        } // [自动静态注释] 作用域/控制流边界
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


