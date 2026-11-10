/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0001265C
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0011265c; name: FUN_.text__0011265c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN__text__0011265c(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  int iVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (*(char *)(param_1 + 0x2e0) != '\0') { // [自动静态注释] 条件判断/分支
    return param_1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  *(undefined1 *)(param_1 + 0x2e0) = 1;
  uVar5 = tpidr_el0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar5 = uVar5 & 0xffffffffffffe000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(long *)(uVar5 + 0x98) == 0x10) { // [自动静态注释] 条件判断/分支
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10(); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  plVar4 = *(long **)(*_DAT_0089f3d8 + 0x1e8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(long **)(uVar5 + *(long *)(uVar5 + 0x98) * 8 + 0x18) = plVar4;
  *(long *)(uVar5 + 0x98) = *(long *)(uVar5 + 0x98) + 1;
  plVar2 = (long *)(**(code **)(*plVar4 + 0x10))(plVar4,0x180,0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (plVar2 != (long *)0x0) { // [自动静态注释] 条件判断/分支
    FUN__text__003d0bd8(plVar2,plVar4); // [自动静态注释] 调用尚未恢复正式名称的函数
    lVar3 = _DAT_0089fdd0 + 0x50; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *plVar2 = _DAT_0089fdd0 + 0x10;
    plVar2[1] = (long)plVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    plVar2[9] = lVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    plVar2[2] = (long)plVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    plVar2[3] = 0x180; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    plVar2[4] = 0x10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(long *)(uVar5 + 0x98) = *(long *)(uVar5 + 0x98) + -1;
    (**(code **)(plVar2[9] + 0x10))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    if (*(long *)(param_1 + 0x2f8) != 0) { // [自动静态注释] 条件判断/分支
      (**(code **)(*(long *)(*(long *)(param_1 + 0x2f8) + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
    *(long **)(param_1 + 0x2f8) = plVar2;
    lVar3 = FUN__text__003d0c68(plVar2,0); // [自动静态注释] 调用尚未恢复正式名称的函数
    return lVar3; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  (**(code **)(*plVar4 + 0xb8))(plVar4); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  lVar3 = FUN__text__003d0bd8(0,plVar4); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (*(char *)(lVar3 + 0x2f0) != '\0') { // [自动静态注释] 条件判断/分支
    return 1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  iVar1 = FUN__text__003d0e08(*(undefined8 *)(lVar3 + 0x2f8)); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (iVar1 == 1) { // [自动静态注释] 条件判断/分支
    *(undefined1 *)(lVar3 + 0x2f0) = 1;
    FUN__text__003d0e80(*(undefined8 *)(lVar3 + 0x2f8)); // [自动静态注释] 调用尚未恢复正式名称的函数
    return 1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  return 0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


