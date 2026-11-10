/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00115790
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00215790; name: FUN_.text__00215790
 */


void FUN__text__00215790(undefined8 *param_1,long *param_2,undefined8 param_3,undefined4 param_4, // [自动静态注释] 调用尚未恢复正式名称的函数
                        int param_5,undefined4 param_6) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义

{ // [自动静态注释] 作用域/控制流边界
  long *plVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *local_58; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar2 = (**(code **)(*param_2 + 0x10))(param_2,0x178,8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar4 = tpidr_el0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar4 = uVar4 & 0xffffffffffffe000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(long *)(uVar4 + 0x98) == 0x10) { // [自动静态注释] 条件判断/分支
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10(); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  *(long **)(uVar4 + *(long *)(uVar4 + 0x98) * 8 + 0x18) = param_2;
  *(long *)(uVar4 + 0x98) = *(long *)(uVar4 + 0x98) + 1;
  FUN__text__00215ccc(); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(long *)(uVar4 + 0x98) = *(long *)(uVar4 + 0x98) + -1;
  FUN__text__00215e18(lVar2,param_2,param_3,param_4,param_5,param_6); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (1 < param_5 - 0xbU) { // [自动静态注释] 条件判断/分支
    lVar3 = *(long *)(lVar2 + 0xe8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *param_1 = 0;
    *(undefined8 *)(lVar2 + 0xe8) = 0;
    if (lVar3 != 0) { // [自动静态注释] 条件判断/分支
      (**(code **)(**(long **)(lVar2 + 0xf0) + 0x18)) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                (*(long **)(lVar2 + 0xf0),lVar3,*(undefined8 *)(lVar2 + 0xf8), // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                 *(undefined8 *)(lVar2 + 0x100));
    } // [自动静态注释] 作用域/控制流边界
    lVar3 = *(long *)(lVar2 + 0x48); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined8 *)(lVar2 + 0x48) = 0;
    if (lVar3 != 0) { // [自动静态注释] 条件判断/分支
      (**(code **)(**(long **)(lVar2 + 0x50) + 0x18)) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                (*(long **)(lVar2 + 0x50),lVar3,*(undefined8 *)(lVar2 + 0x58), // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                 *(undefined8 *)(lVar2 + 0x60));
    } // [自动静态注释] 作用域/控制流边界
    lVar3 = *(long *)(lVar2 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined8 *)(lVar2 + 8) = 0;
    if (lVar3 != 0) { // [自动静态注释] 条件判断/分支
      (**(code **)(**(long **)(lVar2 + 0x10) + 0x18)) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                (*(long **)(lVar2 + 0x10),lVar3,*(undefined8 *)(lVar2 + 0x18), // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                 *(undefined8 *)(lVar2 + 0x20));
    } // [自动静态注释] 作用域/控制流边界
                    /* WARNING: Could not recover jumptable at 0x002159b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_2 + 0x18))(param_2,lVar2,0x178,8); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__002159c0(&local_58,param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
  plVar1 = local_58; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar3 = local_58[0xc]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_58[0xc] = lVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (lVar3 != 0) { // [自动静态注释] 条件判断/分支
    lVar2 = *(long *)(lVar3 + 0xe8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined8 *)(lVar3 + 0xe8) = 0;
    if (lVar2 != 0) { // [自动静态注释] 条件判断/分支
      (**(code **)(**(long **)(lVar3 + 0xf0) + 0x18)) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                (*(long **)(lVar3 + 0xf0),lVar2,*(undefined8 *)(lVar3 + 0xf8), // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                 *(undefined8 *)(lVar3 + 0x100));
    } // [自动静态注释] 作用域/控制流边界
    lVar2 = *(long *)(lVar3 + 0x48); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined8 *)(lVar3 + 0x48) = 0;
    if (lVar2 != 0) { // [自动静态注释] 条件判断/分支
      (**(code **)(**(long **)(lVar3 + 0x50) + 0x18)) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                (*(long **)(lVar3 + 0x50),lVar2,*(undefined8 *)(lVar3 + 0x58), // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                 *(undefined8 *)(lVar3 + 0x60));
    } // [自动静态注释] 作用域/控制流边界
    lVar2 = *(long *)(lVar3 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined8 *)(lVar3 + 8) = 0;
    if (lVar2 != 0) { // [自动静态注释] 条件判断/分支
      (**(code **)(**(long **)(lVar3 + 0x10) + 0x18)) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                (*(long **)(lVar3 + 0x10),lVar2,*(undefined8 *)(lVar3 + 0x18), // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                 *(undefined8 *)(lVar3 + 0x20));
    } // [自动静态注释] 作用域/控制流边界
    (**(code **)(*(long *)plVar1[0xd] + 0x18))((long *)plVar1[0xd],lVar3,plVar1[0xe],plVar1[0xf]); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    lVar2 = plVar1[0xc]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  plVar1[0xd] = (long)param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar1[0xe] = 0x178; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar1[0xf] = 8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar4 = FUN__text__00215f48(lVar2); // [自动静态注释] 调用尚未恢复正式名称的函数
  if ((uVar4 & 1) != 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*plVar1 + 0x128))(plVar1); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  *param_1 = local_58;
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


