/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00015650
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00115650; name: FUN_.text__00115650
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00115650(long *param_1,long param_2,long *param_3,int param_4) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long *plVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int *piVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (*(uint *)(param_2 + 0x2230) != 0) { // [自动静态注释] 条件判断/分支
    uVar4 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    piVar3 = (int *)(param_2 + 0x20); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    do { // [自动静态注释] 循环/迭代
      plVar1 = _DAT_0089f5c8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (*(long *)(piVar3 + -4) != 0) { // [自动静态注释] 条件判断/分支
        plVar1 = (long *)(*(long *)(piVar3 + -4) + 0x58); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      if ((*plVar1 == *param_3) && (*piVar3 == param_4)) { // [自动静态注释] 条件判断/分支
        if ((uint)uVar4 < 0x16c) { // [自动静态注释] 条件判断/分支
          lVar2 = *(long *)(piVar3 + -2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          *param_1 = lVar2;
          if (lVar2 == 0) { // [自动静态注释] 条件判断/分支
            return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
          } // [自动静态注释] 作用域/控制流边界
                    /* WARNING: Could not recover jumptable at 0x001156c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
        } // [自动静态注释] 作用域/控制流边界
        break; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      } // [自动静态注释] 作用域/控制流边界
      uVar4 = uVar4 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      piVar3 = piVar3 + 6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (*(uint *)(param_2 + 0x2230) != uVar4); // [自动静态注释] 循环/迭代
  } // [自动静态注释] 作用域/控制流边界
  *param_1 = 0;
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


