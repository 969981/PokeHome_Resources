/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_000C2D9C
 * 用途/行为：用途尚未确认；代码可观察到：内存复制/初始化, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001c2d9c; name: FUN_.text__001c2d9c
 */


void FUN__text__001c2d9c(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *local_78; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *local_70; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_68; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_60; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_58; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_50; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_48; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  local_50 = *(undefined8 *)(param_1 + 0x658); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar4 = *(long **)(param_1 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_48 = *(undefined8 *)(param_1 + 0x640); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_58 = param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar2 = (undefined8 *)(**(code **)(*plVar4 + 0x10))(plVar4,0x230,8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar6 = tpidr_el0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar6 = uVar6 & 0xffffffffffffe000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(long *)(uVar6 + 0x98) != 0x10) { // [自动静态注释] 条件判断/分支
    lVar1 = uVar6 + 0x18; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(long **)(lVar1 + *(long *)(uVar6 + 0x98) * 8) = plVar4;
    *(long *)(uVar6 + 0x98) = *(long *)(uVar6 + 0x98) + 1;
    puVar2[1] = local_58; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puVar2[2] = local_50; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined4 *)(puVar2 + 0x3e) = 0;
    puVar2[0x41] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puVar2[0x3f] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puVar2[0x40] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puVar2[0x42] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puVar2[0x43] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined1 *)(puVar2 + 0x44) = 0;
    puVar2[0x45] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puVar2[3] = local_48; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *puVar2 = 0x86de00;
    memset(puVar2 + 4,0,0x1cc); // [自动静态注释] 内存复制、清零或移动
    *(long *)(uVar6 + 0x98) = *(long *)(uVar6 + 0x98) + -1;
    puVar5 = *(undefined8 **)(param_1 + 0x6f8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined8 **)(param_1 + 0x6f8) = puVar2;
    if (puVar5 != (undefined8 *)0x0) { // [自动静态注释] 条件判断/分支
      (**(code **)*puVar5)(puVar5); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      (**(code **)(**(long **)(param_1 + 0x700) + 0x18)) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                (*(long **)(param_1 + 0x700),puVar5,*(undefined8 *)(param_1 + 0x708), // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                 *(undefined8 *)(param_1 + 0x710));
    } // [自动静态注释] 作用域/控制流边界
    *(long **)(param_1 + 0x700) = plVar4;
    *(undefined8 *)(param_1 + 0x708) = 0x230;
    *(undefined8 *)(param_1 + 0x710) = 8;
    puVar2 = (undefined8 *)(**(code **)(*plVar4 + 0x10))(plVar4,0x38,8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (*(long *)(uVar6 + 0x98) != 0x10) { // [自动静态注释] 条件判断/分支
      *(long **)(lVar1 + *(long *)(uVar6 + 0x98) * 8) = plVar4;
      *(long *)(uVar6 + 0x98) = *(long *)(uVar6 + 0x98) + 1;
      puVar2[1] = local_58; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar2[2] = local_50; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar2[3] = local_48; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(undefined1 *)(puVar2 + 4) = 1;
      puVar2[5] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar2[6] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *puVar2 = 0x86de20;
      *(long *)(uVar6 + 0x98) = *(long *)(uVar6 + 0x98) + -1;
      puVar5 = *(undefined8 **)(param_1 + 0x678); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(undefined8 **)(param_1 + 0x678) = puVar2;
      if (puVar5 != (undefined8 *)0x0) { // [自动静态注释] 条件判断/分支
        (**(code **)*puVar5)(puVar5); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        (**(code **)(**(long **)(param_1 + 0x680) + 0x18)) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                  (*(long **)(param_1 + 0x680),puVar5,*(undefined8 *)(param_1 + 0x688), // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                   *(undefined8 *)(param_1 + 0x690));
      } // [自动静态注释] 作用域/控制流边界
      *(long **)(param_1 + 0x680) = plVar4;
      *(undefined8 *)(param_1 + 0x688) = 0x38;
      *(undefined8 *)(param_1 + 0x690) = 8;
      uVar3 = (**(code **)(*plVar4 + 0x10))(plVar4,0x4c8,8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (*(long *)(uVar6 + 0x98) != 0x10) { // [自动静态注释] 条件判断/分支
        *(long **)(lVar1 + *(long *)(uVar6 + 0x98) * 8) = plVar4;
        *(long *)(uVar6 + 0x98) = *(long *)(uVar6 + 0x98) + 1;
        FUN__text__001c4910(uVar3,&local_58); // [自动静态注释] 调用尚未恢复正式名称的函数
        *(long *)(uVar6 + 0x98) = *(long *)(uVar6 + 0x98) + -1;
        puVar2 = *(undefined8 **)(param_1 + 0x698); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *(undefined8 *)(param_1 + 0x698) = uVar3;
        if (puVar2 != (undefined8 *)0x0) { // [自动静态注释] 条件判断/分支
          (**(code **)*puVar2)(puVar2); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          (**(code **)(**(long **)(param_1 + 0x6a0) + 0x18)) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                    (*(long **)(param_1 + 0x6a0),puVar2,*(undefined8 *)(param_1 + 0x6a8), // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                     *(undefined8 *)(param_1 + 0x6b0));
        } // [自动静态注释] 作用域/控制流边界
        *(long **)(param_1 + 0x6a0) = plVar4;
        *(undefined8 *)(param_1 + 0x6a8) = 0x4c8;
        *(undefined8 *)(param_1 + 0x6b0) = 8;
        FUN__text__001c4370(&local_78,plVar4,&local_58); // [自动静态注释] 调用尚未恢复正式名称的函数
        puVar2 = local_78; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        local_78 = (undefined8 *)0x0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        puVar5 = *(undefined8 **)(param_1 + 0x6b8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *(undefined8 **)(param_1 + 0x6b8) = puVar2;
        if (puVar5 == (undefined8 *)0x0) { // [自动静态注释] 条件判断/分支
          *(long **)(param_1 + 0x6c0) = local_70;
          *(undefined8 *)(param_1 + 0x6c8) = local_68;
          *(undefined8 *)(param_1 + 0x6d0) = local_60;
        } // [自动静态注释] 作用域/控制流边界
        else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          (**(code **)*puVar5)(puVar5); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          (**(code **)(**(long **)(param_1 + 0x6c0) + 0x18)) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                    (*(long **)(param_1 + 0x6c0),puVar5,*(undefined8 *)(param_1 + 0x6c8), // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                     *(undefined8 *)(param_1 + 0x6d0));
          puVar2 = local_78; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          local_78 = (undefined8 *)0x0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          *(long **)(param_1 + 0x6c0) = local_70;
          *(undefined8 *)(param_1 + 0x6c8) = local_68;
          *(undefined8 *)(param_1 + 0x6d0) = local_60;
          if (puVar2 != (undefined8 *)0x0) { // [自动静态注释] 条件判断/分支
            (**(code **)*puVar2)(puVar2); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
            (**(code **)(*local_70 + 0x18))(local_70,puVar2,local_68,local_60); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          } // [自动静态注释] 作用域/控制流边界
        } // [自动静态注释] 作用域/控制流边界
        puVar2 = (undefined8 *)(**(code **)(*plVar4 + 0x10))(plVar4,0x70,8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        if (*(long *)(uVar6 + 0x98) != 0x10) { // [自动静态注释] 条件判断/分支
          *(long **)(lVar1 + *(long *)(uVar6 + 0x98) * 8) = plVar4;
          *(long *)(uVar6 + 0x98) = *(long *)(uVar6 + 0x98) + 1;
          *puVar2 = 0x86d9c8;
          puVar2[1] = local_58; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          puVar2[2] = local_50; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          puVar2[3] = local_48; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          *(undefined1 *)(puVar2 + 4) = 1;
          puVar2[5] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          puVar2[6] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          puVar2[7] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          puVar2[8] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          puVar2[0xd] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          puVar2[9] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          puVar2[10] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          puVar2[0xb] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          puVar2[0xc] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          *puVar2 = 0x86de60;
          *(long *)(uVar6 + 0x98) = *(long *)(uVar6 + 0x98) + -1;
          puVar5 = *(undefined8 **)(param_1 + 0x6d8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          *(undefined8 **)(param_1 + 0x6d8) = puVar2;
          if (puVar5 != (undefined8 *)0x0) { // [自动静态注释] 条件判断/分支
            (**(code **)*puVar5)(puVar5); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
            (**(code **)(**(long **)(param_1 + 0x6e0) + 0x18)) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                      (*(long **)(param_1 + 0x6e0),puVar5,*(undefined8 *)(param_1 + 0x6e8), // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                       *(undefined8 *)(param_1 + 0x6f0));
          } // [自动静态注释] 作用域/控制流边界
          *(long **)(param_1 + 0x6e0) = plVar4;
          *(undefined8 *)(param_1 + 0x6e8) = 0x70;
          *(undefined8 *)(param_1 + 0x6f0) = 8;
          FUN__text__0019cfc0(*(undefined8 *)(param_1 + 0x6f8),*(undefined8 *)(param_1 + 0x6b8)); // [自动静态注释] 调用尚未恢复正式名称的函数
          FUN__text__001c4b6c(*(undefined8 *)(param_1 + 0x678),*(undefined4 *)(param_1 + 0x648)); // [自动静态注释] 调用尚未恢复正式名称的函数
          FUN__text__001c4fb8(*(undefined8 *)(param_1 + 0x698)); // [自动静态注释] 调用尚未恢复正式名称的函数
          FUN__text__001c6fec(*(undefined8 *)(param_1 + 0x6b8),*(undefined8 *)(param_1 + 0x6f8)); // [自动静态注释] 调用尚未恢复正式名称的函数
          FUN__text__001c74d8(*(undefined8 *)(param_1 + 0x6d8),param_1 + 0x648); // [自动静态注释] 调用尚未恢复正式名称的函数
          FUN__text__001b1b44(*(undefined8 *)(param_1 + 0x678),0); // [自动静态注释] 调用尚未恢复正式名称的函数
          FUN__text__001b1b44(*(undefined8 *)(param_1 + 0x698),0); // [自动静态注释] 调用尚未恢复正式名称的函数
          FUN__text__001b1b44(*(undefined8 *)(param_1 + 0x6b8),0); // [自动静态注释] 调用尚未恢复正式名称的函数
          FUN__text__001b1b44(*(undefined8 *)(param_1 + 0x6d8),0); // [自动静态注释] 调用尚未恢复正式名称的函数
          return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
        } // [自动静态注释] 作用域/控制流边界
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
                    /* WARNING: Subroutine does not return */
  FUN__text__00102c10(); // [自动静态注释] 调用尚未恢复正式名称的函数
} // [自动静态注释] 作用域/控制流边界


