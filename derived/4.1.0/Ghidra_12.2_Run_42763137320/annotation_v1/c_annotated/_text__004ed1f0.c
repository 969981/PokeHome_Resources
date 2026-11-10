/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_003ED1F0
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004ed1f0; name: FUN_.text__004ed1f0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__004ed1f0(long param_1,long param_2,int param_3,long *param_4) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (*(long *)(param_1 + 0x30) != 0) { // [自动静态注释] 条件判断/分支
    lVar1 = _DAT_008a5110 + 0x10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar5 = *(long *)(param_1 + 0x30); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    do { // [自动静态注释] 循环/迭代
      lVar8 = *(long *)(lVar5 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if ((((*(byte *)(lVar5 + 0x5a) & 0xe) == 0) && // [自动静态注释] 条件判断/分支
          (*(long *)(lVar5 + 0x80) == *(long *)(param_2 + 0x50))) && // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
         (uVar4 = FUN__text__004edb20(param_2,*(undefined4 *)(lVar5 + 0x88)), (uVar4 & 1) == 0)) { // [自动静态注释] 调用尚未恢复正式名称的函数
        plVar7 = *(long **)(param_1 + 0x70); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        if (plVar7 != (long *)0x0) { // [自动静态注释] 条件判断/分支
          plVar6 = (long *)0x0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          do { // [自动静态注释] 循环/迭代
            while ((iVar3 = (**(code **)(*plVar7 + 0x10))(plVar7), iVar3 == 1 && // [自动静态注释] 循环/迭代
                   (plVar7[3] == lVar5))) { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
              if ((int)plVar7[2] <= param_3) goto LAB__text__004ed250; // [自动静态注释] 条件判断/分支
              plVar9 = (long *)plVar7[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
              plVar2 = (long *)(param_1 + 0x70); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
              if (*(long **)(param_1 + 0x70) != plVar7) { // [自动静态注释] 条件判断/分支
                plVar2 = plVar6 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
              } // [自动静态注释] 作用域/控制流边界
              *plVar2 = (long)plVar9;
              if (*(long **)(param_1 + 0x68) == plVar7) { // [自动静态注释] 条件判断/分支
                *(long **)(param_1 + 0x68) = plVar6;
              } // [自动静态注释] 作用域/控制流边界
              (**(code **)*plVar7)(plVar7); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
              FUN__text__00400fc0(0,plVar7); // [自动静态注释] 调用尚未恢复正式名称的函数
              plVar7 = plVar9; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
              if (plVar9 == (long *)0x0) goto LAB__text__004ed328; // [自动静态注释] 条件判断/分支
            } // [自动静态注释] 作用域/控制流边界
            plVar2 = plVar7 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            plVar6 = plVar7; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            plVar7 = (long *)*plVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          } while ((long *)*plVar2 != (long *)0x0); // [自动静态注释] 循环/迭代
        } // [自动静态注释] 作用域/控制流边界
LAB__text__004ed328: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        plVar7 = (long *)FUN__text__00400f80(0,0x30); // [自动静态注释] 调用尚未恢复正式名称的函数
        if (plVar7 != (long *)0x0) { // [自动静态注释] 条件判断/分支
          *(int *)(plVar7 + 2) = param_3;
          plVar7[3] = lVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          *plVar7 = lVar1;
          lVar5 = *param_4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          *(int *)(plVar7 + 5) = (int)param_4[1];
          plVar7[4] = lVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          FUN__text__004ed750(param_1 + 0x60,plVar7); // [自动静态注释] 调用尚未恢复正式名称的函数
        } // [自动静态注释] 作用域/控制流边界
      } // [自动静态注释] 作用域/控制流边界
LAB__text__004ed250: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      lVar5 = lVar8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (lVar8 != 0); // [自动静态注释] 循环/迭代
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


