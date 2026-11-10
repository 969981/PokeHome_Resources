/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_004D6F3C
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005d6f3c; name: FUN_.text__005d6f3c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__005d6f3c(long *param_1,long param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  int iVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar2 = *(long *)(param_2 + 0xb8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(long *)(param_2 + 0xb0) != lVar2) { // [自动静态注释] 条件判断/分支
    lVar3 = *(long *)(lVar2 + -8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (lVar3 != 0) { // [自动静态注释] 条件判断/分支
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      lVar2 = *(long *)(param_2 + 0xb8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    *param_1 = lVar3;
    *(long *)(param_2 + 0xb8) = lVar2 + -8;
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  uVar5 = tpidr_el0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar5 = uVar5 & 0xffffffffffffe000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(long *)(uVar5 + 0x98) == 0x10) { // [自动静态注释] 条件判断/分支
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10(); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  plVar4 = *(long **)(param_2 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(long **)(uVar5 + *(long *)(uVar5 + 0x98) * 8 + 0x18) = plVar4;
  *(long *)(uVar5 + 0x98) = *(long *)(uVar5 + 0x98) + 1;
  lVar2 = (**(code **)(*plVar4 + 0x10))(plVar4,0x70,8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (lVar2 == 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*plVar4 + 0xb8))(plVar4); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    FUN__text__005d6d30(0,*(undefined4 *)(param_2 + 0x118)); // [自动静态注释] 调用尚未恢复正式名称的函数
    _DAT_00000010 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    _DAT_00000018 = 0x70; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    _DAT_00000020 = 8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    _DAT_00000008 = plVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(long *)(uVar5 + 0x98) = *(long *)(uVar5 + 0x98) + -1;
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    FUN__text__005d6d30(lVar2,*(undefined4 *)(param_2 + 0x118)); // [自动静态注释] 调用尚未恢复正式名称的函数
    *(long **)(lVar2 + 8) = plVar4;
    *(long *)(lVar2 + 0x10) = lVar2;
    *(undefined8 *)(lVar2 + 0x18) = 0x70;
    *(undefined8 *)(lVar2 + 0x20) = 8;
    *(long *)(uVar5 + 0x98) = *(long *)(uVar5 + 0x98) + -1;
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  iVar1 = *(int *)(param_2 + 0x118); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *param_1 = lVar2;
  *(int *)(param_2 + 0x118) = iVar1 + 1;
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


