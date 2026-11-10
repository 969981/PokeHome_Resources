/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00207EB0
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00307eb0; name: FUN_.text__00307eb0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN__text__00307eb0(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  uint uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  short sVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int *piVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  iVar3 = FUN__text__00631008(*(undefined8 *)(param_1 + 0x58)); // [自动静态注释] 调用尚未恢复正式名称的函数
  piVar7 = (int *)&DAT_00734494; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  iVar4 = _DAT_00734494; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  do { // [自动静态注释] 循环/迭代
    if (iVar4 == iVar3) { // [自动静态注释] 条件判断/分支
LAB__text__00307f54: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      iVar4 = FUN__text__00634570(*(undefined8 *)(param_1 + 0x58)); // [自动静态注释] 调用尚未恢复正式名称的函数
      lVar5 = FUN__text__00321ac0(); // [自动静态注释] 调用尚未恢复正式名称的函数
      if (iVar4 == *(int *)(lVar5 + 0x7b074)) { // [自动静态注释] 条件判断/分支
        FUN__text__00631008(*(undefined8 *)(param_1 + 0x58)); // [自动静态注释] 调用尚未恢复正式名称的函数
        lVar5 = FUN__text__00325bc0(); // [自动静态注释] 调用尚未恢复正式名称的函数
        uVar1 = *(int *)(lVar5 + 0x2c) - 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        if (uVar1 < 10) { // [自动静态注释] 条件判断/分支
                    /* WARNING: Could not emulate address calculation at 0x00307fa4 */
                    /* WARNING: Treating indirect jump as call */
          uVar6 = (*(code *)((ulong)*(byte *)((ulong)uVar1 + 0x733c70) * 4 + 0x307fb0))(); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          return uVar6; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
        } // [自动静态注释] 作用域/控制流边界
        uVar6 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        uVar6 = 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      return uVar6; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
    if (piVar7 + 1 == (int *)0x734648) { // [自动静态注释] 条件判断/分支
      sVar2 = FUN__text__00631010(*(undefined8 *)(param_1 + 0x58)); // [自动静态注释] 调用尚未恢复正式名称的函数
      if (iVar3 != 0x29e) { // [自动静态注释] 条件判断/分支
        return 1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
      } // [自动静态注释] 作用域/控制流边界
      if (sVar2 != 5) { // [自动静态注释] 条件判断/分支
        return 1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
      } // [自动静态注释] 作用域/控制流边界
      goto LAB__text__00307f54; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
    if (((piVar7[1] == iVar3) || (piVar7[2] == iVar3)) || (piVar7[3] == iVar3)) // [自动静态注释] 条件判断/分支
    goto LAB__text__00307f54; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    piVar7 = piVar7 + 4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    iVar4 = *piVar7; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } while( true ); // [自动静态注释] 循环/迭代
} // [自动静态注释] 作用域/控制流边界


