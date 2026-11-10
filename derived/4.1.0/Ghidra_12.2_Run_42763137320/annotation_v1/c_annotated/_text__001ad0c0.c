/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_000AD0C0
 * 用途/行为：用途尚未确认；代码可观察到：内存复制/初始化, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001ad0c0; name: FUN_.text__001ad0c0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__001ad0c0(long param_1,undefined8 param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar10; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar7 = *(long *)(param_1 + 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if ((lVar7 == 0) || (lVar10 = *(long *)(param_1 + 0x18), lVar10 == 0)) { // [自动静态注释] 条件判断/分支
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  lVar9 = *(long *)(param_1 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar5 = *(long **)(lVar9 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar3 = (undefined8 *)(**(code **)(*plVar5 + 0x10))(plVar5,0x4f8,8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar8 = tpidr_el0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar8 = uVar8 & 0xffffffffffffe000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(long *)(uVar8 + 0x98) != 0x10) { // [自动静态注释] 条件判断/分支
    lVar1 = uVar8 + 0x18; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(long **)(lVar1 + *(long *)(uVar8 + 0x98) * 8) = plVar5;
    *(long *)(uVar8 + 0x98) = *(long *)(uVar8 + 0x98) + 1;
    *(undefined1 *)(puVar3 + 4) = 1;
    puVar3[2] = lVar7; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puVar3[3] = lVar10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puVar3[5] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puVar3[6] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puVar3[7] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puVar3[8] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *puVar3 = 0x86db40;
    puVar3[1] = lVar9; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    memset(puVar3 + 9,0,0x4a9); // [自动静态注释] 内存复制、清零或移动
    *(long *)(uVar8 + 0x98) = *(long *)(uVar8 + 0x98) + -1;
    puVar6 = *(undefined8 **)(param_1 + 0x20); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined8 **)(param_1 + 0x20) = puVar3;
    if (puVar6 != (undefined8 *)0x0) { // [自动静态注释] 条件判断/分支
      (**(code **)*puVar6)(puVar6); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      (**(code **)(**(long **)(param_1 + 0x28) + 0x18)) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                (*(long **)(param_1 + 0x28),puVar6,*(undefined8 *)(param_1 + 0x30), // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                 *(undefined8 *)(param_1 + 0x38));
    } // [自动静态注释] 作用域/控制流边界
    *(long **)(param_1 + 0x28) = plVar5;
    *(undefined8 *)(param_1 + 0x30) = 0x4f8;
    *(undefined8 *)(param_1 + 0x38) = 8;
    plVar4 = (long *)(**(code **)(*plVar5 + 0x10))(plVar5,0x450,8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (*(long *)(uVar8 + 0x98) != 0x10) { // [自动静态注释] 条件判断/分支
      *(long **)(lVar1 + *(long *)(uVar8 + 0x98) * 8) = plVar5;
      *(long *)(uVar8 + 0x98) = *(long *)(uVar8 + 0x98) + 1;
      lVar2 = _DAT_008a0fa0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(undefined1 *)(plVar4 + 4) = 1;
      plVar4[2] = lVar7; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      plVar4[3] = lVar10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      plVar4[5] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      plVar4[6] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      plVar4[7] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      plVar4[8] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(undefined4 *)(plVar4 + 9) = 0;
      *(undefined1 *)((long)plVar4 + 0x43c) = 0;
      plVar4[0x88] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      plVar4[0x89] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *plVar4 = lVar2 + 0x10;
      plVar4[1] = lVar9; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      memset(plVar4 + 10,0,0x3e9); // [自动静态注释] 内存复制、清零或移动
      *(long *)(uVar8 + 0x98) = *(long *)(uVar8 + 0x98) + -1;
      puVar3 = *(undefined8 **)(param_1 + 0x40); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(long **)(param_1 + 0x40) = plVar4;
      if (puVar3 != (undefined8 *)0x0) { // [自动静态注释] 条件判断/分支
        (**(code **)*puVar3)(puVar3); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        (**(code **)(**(long **)(param_1 + 0x48) + 0x18)) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                  (*(long **)(param_1 + 0x48),puVar3,*(undefined8 *)(param_1 + 0x50), // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                   *(undefined8 *)(param_1 + 0x58));
      } // [自动静态注释] 作用域/控制流边界
      *(undefined8 *)(param_1 + 0x58) = 8;
      *(long **)(param_1 + 0x48) = plVar5;
      *(undefined8 *)(param_1 + 0x50) = 0x450;
      plVar4 = (long *)(**(code **)(*plVar5 + 0x10))(plVar5,0x450,8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (*(long *)(uVar8 + 0x98) != 0x10) { // [自动静态注释] 条件判断/分支
        *(long **)(lVar1 + *(long *)(uVar8 + 0x98) * 8) = plVar5;
        *(long *)(uVar8 + 0x98) = *(long *)(uVar8 + 0x98) + 1;
        plVar4[2] = lVar7; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        plVar4[3] = lVar10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *(undefined4 *)(plVar4 + 9) = 0;
        plVar4[5] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        plVar4[6] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *(undefined1 *)((long)plVar4 + 0x43c) = 0;
        plVar4[0x88] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        plVar4[0x89] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *(undefined1 *)(plVar4 + 4) = 1;
        plVar4[7] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        plVar4[8] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *plVar4 = lVar2 + 0x10;
        plVar4[1] = lVar9; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        memset(plVar4 + 10,0,0x3e9); // [自动静态注释] 内存复制、清零或移动
        *(long *)(uVar8 + 0x98) = *(long *)(uVar8 + 0x98) + -1;
        puVar3 = *(undefined8 **)(param_1 + 0x60); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *(long **)(param_1 + 0x60) = plVar4;
        if (puVar3 != (undefined8 *)0x0) { // [自动静态注释] 条件判断/分支
          (**(code **)*puVar3)(puVar3); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          (**(code **)(**(long **)(param_1 + 0x68) + 0x18)) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                    (*(long **)(param_1 + 0x68),puVar3,*(undefined8 *)(param_1 + 0x70), // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                     *(undefined8 *)(param_1 + 0x78));
        } // [自动静态注释] 作用域/控制流边界
        *(long **)(param_1 + 0x68) = plVar5;
        *(undefined8 *)(param_1 + 0x70) = 0x450;
        *(undefined8 *)(param_1 + 0x78) = 8;
        FUN__text__001ad4d0(*(undefined8 *)(param_1 + 0x20),1); // [自动静态注释] 调用尚未恢复正式名称的函数
        FUN__text__001b05e0(*(undefined8 *)(param_1 + 0x40),0,param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
        FUN__text__001b05e0(*(undefined8 *)(param_1 + 0x60),1,param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
        FUN__text__001b1b44(*(undefined8 *)(param_1 + 0x20),1); // [自动静态注释] 调用尚未恢复正式名称的函数
        FUN__text__001b1b44(*(undefined8 *)(param_1 + 0x40),1); // [自动静态注释] 调用尚未恢复正式名称的函数
        FUN__text__001b1b44(*(undefined8 *)(param_1 + 0x60),1); // [自动静态注释] 调用尚未恢复正式名称的函数
        return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
                    /* WARNING: Subroutine does not return */
  FUN__text__00102c10(); // [自动静态注释] 调用尚未恢复正式名称的函数
} // [自动静态注释] 作用域/控制流边界


