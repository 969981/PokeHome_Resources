/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_000188F8
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001188f8; name: FUN_.text__001188f8
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__001188f8(long param_1,undefined8 param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  *(undefined8 *)(param_1 + 0x408) = param_2;
  nn::hid::InitializeNpad(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  plVar4 = *(long **)(param_1 + 0x408); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined1 **)(param_1 + 0xf0) = &LAB__text__00118b80;
  *(undefined1 **)(param_1 + 0xf8) = &LAB__text__00118b90;
  puVar3 = (undefined8 *)(**(code **)(*plVar4 + 0x10))(plVar4,0x40,8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar7 = tpidr_el0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar7 = uVar7 & 0xffffffffffffe000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(long *)(uVar7 + 0x98) != 0x10) { // [自动静态注释] 条件判断/分支
    lVar1 = uVar7 + 0x18; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(long **)(lVar1 + *(long *)(uVar7 + 0x98) * 8) = plVar4;
    *(long *)(uVar7 + 0x98) = *(long *)(uVar7 + 0x98) + 1;
    puVar3[6] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puVar3[7] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puVar3[2] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puVar3[3] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined4 *)(puVar3 + 6) = 0x3f000000;
    puVar3[4] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puVar3[5] = 0x3f4f04ff00000020; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *puVar3 = 0x868710;
    puVar3[1] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(long *)(uVar7 + 0x98) = *(long *)(uVar7 + 0x98) + -1;
    puVar6 = *(undefined8 **)(param_1 + 0x90); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined8 **)(param_1 + 0x90) = puVar3;
    if (puVar6 != (undefined8 *)0x0) { // [自动静态注释] 条件判断/分支
      (**(code **)*puVar6)(puVar6); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      (**(code **)(**(long **)(param_1 + 0x98) + 0x18)) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                (*(long **)(param_1 + 0x98),puVar6,*(undefined8 *)(param_1 + 0xa0), // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                 *(undefined8 *)(param_1 + 0xa8));
    } // [自动静态注释] 作用域/控制流边界
    *(long **)(param_1 + 0x98) = plVar4;
    *(undefined8 *)(param_1 + 0xa0) = 0x40;
    plVar5 = *(long **)(param_1 + 0x408); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined8 *)(param_1 + 0xa8) = 8;
    plVar4 = (long *)(**(code **)(*plVar5 + 0x10))(plVar5,0x40,8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (*(long *)(uVar7 + 0x98) != 0x10) { // [自动静态注释] 条件判断/分支
      *(long **)(lVar1 + *(long *)(uVar7 + 0x98) * 8) = plVar5;
      *(long *)(uVar7 + 0x98) = *(long *)(uVar7 + 0x98) + 1;
      plVar4[6] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      plVar4[7] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      plVar4[2] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      plVar4[3] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      plVar4[4] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      plVar4[5] = 0x3f4f04ff00000020; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      lVar2 = _DAT_0089fe70; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(undefined4 *)(plVar4 + 6) = 0x3f000000;
      *plVar4 = lVar2 + 0x10;
      plVar4[1] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(long *)(uVar7 + 0x98) = *(long *)(uVar7 + 0x98) + -1;
      puVar3 = *(undefined8 **)(param_1 + 0xb0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(long **)(param_1 + 0xb0) = plVar4;
      if (puVar3 != (undefined8 *)0x0) { // [自动静态注释] 条件判断/分支
        (**(code **)*puVar3)(puVar3); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        (**(code **)(**(long **)(param_1 + 0xb8) + 0x18)) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                  (*(long **)(param_1 + 0xb8),puVar3,*(undefined8 *)(param_1 + 0xc0), // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                   *(undefined8 *)(param_1 + 200));
      } // [自动静态注释] 作用域/控制流边界
      *(long **)(param_1 + 0xb8) = plVar5;
      *(undefined8 *)(param_1 + 0xc0) = 0x40;
      plVar5 = *(long **)(param_1 + 0x408); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(undefined8 *)(param_1 + 200) = 8;
      plVar4 = (long *)(**(code **)(*plVar5 + 0x10))(plVar5,0x40,8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (*(long *)(uVar7 + 0x98) != 0x10) { // [自动静态注释] 条件判断/分支
        *(long **)(lVar1 + *(long *)(uVar7 + 0x98) * 8) = plVar5;
        *(long *)(uVar7 + 0x98) = *(long *)(uVar7 + 0x98) + 1;
        plVar4[6] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        plVar4[7] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        plVar4[4] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        plVar4[5] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        plVar4[2] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        plVar4[3] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *plVar4 = _DAT_0089fe98 + 0x10;
        plVar4[1] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *(undefined4 *)(plVar4 + 1) = 0x20;
        *(long *)(uVar7 + 0x98) = *(long *)(uVar7 + 0x98) + -1;
        puVar3 = *(undefined8 **)(param_1 + 0x3b0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *(long **)(param_1 + 0x3b0) = plVar4;
        if (puVar3 != (undefined8 *)0x0) { // [自动静态注释] 条件判断/分支
          (**(code **)*puVar3)(puVar3); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          (**(code **)(**(long **)(param_1 + 0x3b8) + 0x18)) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                    (*(long **)(param_1 + 0x3b8),puVar3,*(undefined8 *)(param_1 + 0x3c0), // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                     *(undefined8 *)(param_1 + 0x3c8));
        } // [自动静态注释] 作用域/控制流边界
        *(long **)(param_1 + 0x3b8) = plVar5;
        *(undefined8 *)(param_1 + 0x3c0) = 0x40;
        *(undefined8 *)(param_1 + 0x3c8) = 8;
        *(long *)(param_1 + 400) = param_1 + 0x3d0;
        FUN__text__00118bcc(param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
        return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
                    /* WARNING: Subroutine does not return */
  FUN__text__00102c10(); // [自动静态注释] 调用尚未恢复正式名称的函数
} // [自动静态注释] 作用域/控制流边界


