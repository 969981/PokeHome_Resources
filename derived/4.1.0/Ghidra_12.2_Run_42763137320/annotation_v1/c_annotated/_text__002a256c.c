/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_001A256C
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002a256c; name: FUN_.text__002a256c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__002a256c(undefined8 param_1,undefined8 param_2,int param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  int iVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int *piVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (param_3 - 4U < 0xfffffffe) { // [自动静态注释] 条件判断/分支
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  lVar6 = *(long *)(*_DAT_0089f5b0 + 0x60); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (lVar6 != 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  lVar4 = *(long *)(lVar6 + 0x100); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (lVar4 != 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  iVar1 = FUN__text__00631008(param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (iVar1 == 0x147) { // [自动静态注释] 条件判断/分支
    uVar2 = FUN__text__00631010(param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
    uVar3 = FUN__text__00634538(param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
    iVar1 = 2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if ((uVar3 & 1) == 0) { // [自动静态注释] 条件判断/分支
      iVar1 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    uVar2 = iVar1 + (uVar2 & 0xffff); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (param_3 == 3) { // [自动静态注释] 条件判断/分支
      piVar5 = (int *)(lVar4 + (ulong)uVar2 * 4 + 100); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      iVar1 = *piVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      piVar5 = (int *)(lVar4 + (ulong)uVar2 * 4 + 0x54); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      iVar1 = *piVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    if (iVar1 == 0) { // [自动静态注释] 条件判断/分支
      iVar1 = FUN__text__00634578(param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
      *piVar5 = iVar1;
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  else if (lVar4 == 0) { // [自动静态注释] 条件判断/分支
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
                    /* WARNING: Could not recover jumptable at 0x002a2670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


