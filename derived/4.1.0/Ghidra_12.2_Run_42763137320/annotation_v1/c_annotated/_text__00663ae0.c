/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00563AE0
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00663ae0; name: FUN_.text__00663ae0
 */


undefined8 FUN__text__00663ae0(long param_1,long param_2,long param_3,int *param_4) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  int *piVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong *puVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int *piVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (*(int *)(param_1 + 0x5d8) == *(int *)(param_3 + 0x218)) { // [自动静态注释] 条件判断/分支
    *(undefined4 *)(param_1 + 0x5d8) = 0;
  } // [自动静态注释] 作用域/控制流边界
  *(long *)(param_1 + 0x5e0) = *(long *)(param_1 + 0x5e0) - *(long *)(param_2 + 0x1520);
  *(undefined8 *)(param_2 + 0x1520) = 0;
  if ((*(int *)(param_1 + 0x5d8) == 0) && // [自动静态注释] 条件判断/分支
     (iVar3 = FUN__text__00661d1c(param_1,param_1 + 0x550,param_4), iVar3 != 0)) { // [自动静态注释] 调用尚未恢复正式名称的函数
    return 0xffffffffffffffff; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  *(undefined1 *)(param_3 + 0x250) = 0;
  if (*(int *)(param_1 + 0x610) == 0) { // [自动静态注释] 条件判断/分支
    if (*(char *)(param_3 + 0x21c) != '\0') { // [自动静态注释] 条件判断/分支
      puVar6 = *(ulong **)(param_3 + 0x230); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (((puVar6 != (ulong *)0x0) && (piVar7 = (int *)*puVar6, piVar7 != (int *)0x0)) && // [自动静态注释] 条件判断/分支
         (0 < (long)puVar6[2])) { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        piVar1 = (int *)((long)piVar7 + puVar6[2]); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        do { // [自动静态注释] 循环/迭代
          iVar3 = *piVar7; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          iVar4 = FUN__text__0066748c(param_1,2,piVar7 + 1,iVar3); // [自动静态注释] 调用尚未恢复正式名称的函数
          if (iVar4 != 0) { // [自动静态注释] 条件判断/分支
            *param_4 = iVar4;
            return 0xffffffffffffffff; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
          } // [自动静态注释] 作用域/控制流边界
          piVar7 = (int *)((long)(piVar7 + 1) + (ulong)(iVar3 + 1)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        } while (piVar7 < piVar1); // [自动静态注释] 循环/迭代
      } // [自动静态注释] 作用域/控制流边界
      *(undefined1 *)(param_3 + 0x251) = 1;
      return 0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
    FUN__text__0066713c(param_2,0x71c653,*(undefined4 *)(param_3 + 0x218)); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    if (*(int *)(param_1 + 0x610) == 7) { // [自动静态注释] 条件判断/分支
      FUN__text__00650d38(param_1,1); // [自动静态注释] 调用尚未恢复正式名称的函数
      *(ushort *)(param_2 + 0x15a4) = *(ushort *)(param_2 + 0x15a4) | 4;
      iVar3 = 0x38; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      goto LAB__text__00663c24; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
    uVar2 = *(undefined4 *)(param_3 + 0x218); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar5 = FUN__text__00679e4c(); // [自动静态注释] 调用尚未恢复正式名称的函数
    FUN__text__0066713c(param_2,0x71ea92,uVar2,uVar5,*(undefined4 *)(param_1 + 0x610)); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  iVar3 = 0x5c; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
LAB__text__00663c24: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  *param_4 = iVar3;
  return 0xffffffffffffffff; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


