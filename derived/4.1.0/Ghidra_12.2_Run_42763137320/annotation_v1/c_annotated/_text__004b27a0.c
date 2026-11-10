/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_003B27A0
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004b27a0; name: FUN_.text__004b27a0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__004b27a0(long param_1,long param_2,undefined8 param_3,undefined4 param_4, // [自动静态注释] 调用尚未恢复正式名称的函数
                        undefined4 param_5,undefined8 *param_6,undefined4 param_7,uint param_8) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义

{ // [自动静态注释] 作用域/控制流边界
  undefined8 *puVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int *piVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  puVar1 = _DAT_008a45c0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar5 = *(long *)(param_1 + 0x18); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (lVar5 != 0) { // [自动静态注释] 条件判断/分支
    if (param_2 == 0) { // [自动静态注释] 条件判断/分支
      do { // [自动静态注释] 循环/迭代
        if (((*(ushort *)(lVar5 + 0x34) & 1) == 0) && // [自动静态注释] 条件判断/分支
           (lVar2 = FUN__text__00400f80(0,0x48), lVar2 != 0)) { // [自动静态注释] 调用尚未恢复正式名称的函数
          FUN__text__004b7a40(lVar2,0); // [自动静态注释] 调用尚未恢复正式名称的函数
          *(undefined4 *)(lVar2 + 0x38) = param_5;
          *(long *)(lVar2 + 8) = lVar5;
          *(undefined4 *)(lVar2 + 0x30) = param_4;
          *(undefined8 *)(lVar2 + 0x24) = param_6[1];
          *(undefined4 *)(lVar2 + 0x2c) = *(undefined4 *)(param_6 + 2);
          piVar6 = (int *)*param_6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          if (*(long *)(lVar2 + 0x1c) != 0) { // [自动静态注释] 条件判断/分支
            FUN__text__0040c060(); // [自动静态注释] 调用尚未恢复正式名称的函数
          } // [自动静态注释] 作用域/控制流边界
          if (piVar6 != (int *)0x0) { // [自动静态注释] 条件判断/分支
            *piVar6 = *piVar6 + 1;
          } // [自动静态注释] 作用域/控制流边界
          uVar3 = *puVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          *(int **)(lVar2 + 0x1c) = piVar6;
          FUN__text__004b2960(uVar3,lVar2,param_7,param_8 & 1); // [自动静态注释] 调用尚未恢复正式名称的函数
        } // [自动静态注释] 作用域/控制流边界
        lVar5 = *(long *)(lVar5 + 0x18); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } while (lVar5 != 0); // [自动静态注释] 循环/迭代
    } // [自动静态注释] 作用域/控制流边界
    else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      do { // [自动静态注释] 循环/迭代
        if ((*(ushort *)(lVar5 + 0x34) & 1) == 0) { // [自动静态注释] 条件判断/分支
          lVar2 = FUN__text__00400f80(0,0x48); // [自动静态注释] 调用尚未恢复正式名称的函数
          if (lVar2 != 0) { // [自动静态注释] 条件判断/分支
            lVar4 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
LAB__text__004b2860: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
            FUN__text__004b7a40(lVar2,lVar4); // [自动静态注释] 调用尚未恢复正式名称的函数
            *(undefined4 *)(lVar2 + 0x38) = param_5;
            *(long *)(lVar2 + 8) = lVar5;
            *(undefined4 *)(lVar2 + 0x30) = param_4;
            *(undefined8 *)(lVar2 + 0x24) = param_6[1];
            *(undefined4 *)(lVar2 + 0x2c) = *(undefined4 *)(param_6 + 2);
            piVar6 = (int *)*param_6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            if (*(long *)(lVar2 + 0x1c) != 0) { // [自动静态注释] 条件判断/分支
              FUN__text__0040c060(); // [自动静态注释] 调用尚未恢复正式名称的函数
            } // [自动静态注释] 作用域/控制流边界
            if (piVar6 != (int *)0x0) { // [自动静态注释] 条件判断/分支
              *piVar6 = *piVar6 + 1;
            } // [自动静态注释] 作用域/控制流边界
            *(int **)(lVar2 + 0x1c) = piVar6;
            FUN__text__004b2960(*_DAT_008a45c0,lVar2,param_7,param_8 & 1); // [自动静态注释] 调用尚未恢复正式名称的函数
          } // [自动静态注释] 作用域/控制流边界
        } // [自动静态注释] 作用域/控制流边界
        else if ((*(long *)(param_2 + 8) != 0) && (lVar2 = FUN__text__00400f80(0,0x48), lVar2 != 0)) // [自动静态注释] 条件判断/分支
        { // [自动静态注释] 作用域/控制流边界
          lVar4 = param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          goto LAB__text__004b2860; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        } // [自动静态注释] 作用域/控制流边界
        lVar5 = *(long *)(lVar5 + 0x18); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } while (lVar5 != 0); // [自动静态注释] 循环/迭代
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


