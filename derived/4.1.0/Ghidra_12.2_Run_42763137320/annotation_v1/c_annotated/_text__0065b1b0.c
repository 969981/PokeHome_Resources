/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0055B1B0
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0065b1b0; name: FUN_.text__0065b1b0
 */


/* WARNING: Removing unreachable block (ram,0x0065c00c) */
/* WARNING: Removing unreachable block (ram,0x0065c014) */
/* WARNING: Removing unreachable block (ram,0x0065c04c) */
/* WARNING: Removing unreachable block (ram,0x0065c01c) */
/* WARNING: Removing unreachable block (ram,0x0065c038) */

undefined8 FUN__text__0065b1b0(long param_1,undefined8 param_2,undefined8 param_3,long param_4) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  uint uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  char cVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_70; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uStack_68; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (param_4 == 0) { // [自动静态注释] 条件判断/分支
    uVar7 = 2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    uVar7 = 2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (*(int *)(param_4 + 0x16f0) == -0x3f212453) { // [自动静态注释] 条件判断/分支
      local_70 = param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uStack_68 = param_3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      do { // [自动静态注释] 循环/迭代
        if ((*(long *)(param_4 + 0x10) == 0) && (*(int *)(param_4 + 0x60) - 3U < 0xd)) { // [自动静态注释] 条件判断/分支
          FUN__text__0066713c(param_4,0x710862); // [自动静态注释] 调用尚未恢复正式名称的函数
          return 4; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
        } // [自动静态注释] 作用域/控制流边界
        cVar2 = *(char *)(param_1 + 0xf0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *(undefined1 *)(param_1 + 0xf0) = 0;
        if (cVar2 != '\0') { // [自动静态注释] 条件判断/分支
          FUN__text__0065cb00(param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
        } // [自动静态注释] 作用域/控制流边界
        uVar6 = (ulong)*(uint *)(param_4 + 0x60); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        if (*(long **)(param_4 + 0x10) == (long *)0x0) { // [自动静态注释] 条件判断/分支
LAB__text__0065b2b4: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          if ((uint)uVar6 < 0x13) { // [自动静态注释] 条件判断/分支
                    /* WARNING: Could not emulate address calculation at 0x0065b2c8 */
                    /* WARNING: Treating indirect jump as call */
            uVar7 = (*(code *)(&UNK__text__0065b2d8 + (ulong)*(ushort *)(uVar6 * 2 + 0x76024c) * 4)) // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                              (); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
            return uVar7; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
          } // [自动静态注释] 作用域/控制流边界
          return 4; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
        } // [自动静态注释] 作用域/控制流边界
        if (*(uint *)(param_4 + 0x60) - 3 < 0xe) { // [自动静态注释] 条件判断/分支
          **(long **)(param_4 + 0x10) = param_4;
          uVar6 = (ulong)*(uint *)(param_4 + 0x60); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          if (*(long *)(param_4 + 0x10) == 0) goto LAB__text__0065b2b4; // [自动静态注释] 条件判断/分支
        } // [自动静态注释] 作用域/控制流边界
        if (0xe < (uint)uVar6 - 2) goto LAB__text__0065b2b4; // [自动静态注释] 条件判断/分支
        iVar3 = FUN__text__0064fa18(param_4,&local_70,(uint)uVar6 < 9); // [自动静态注释] 调用尚未恢复正式名称的函数
        uVar1 = *(uint *)(param_4 + 0x60); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        uVar6 = (ulong)uVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        if (-1 < iVar3) goto LAB__text__0065b2b4; // [自动静态注释] 条件判断/分支
        if (uVar1 == 4) { // [自动静态注释] 条件判断/分支
          uVar4 = FUN__text__0066c6d8(local_70,uStack_68,*(undefined8 *)(param_4 + 0x1008), // [自动静态注释] 调用尚未恢复正式名称的函数
                                      *(undefined8 *)(param_4 + 0x1010));
          uVar7 = 0x71bbdf; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
LAB__text__0065b760: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          FUN__text__0066713c(param_4,uVar7,uVar4); // [自动静态注释] 调用尚未恢复正式名称的函数
        } // [自动静态注释] 作用域/控制流边界
        else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          if (uVar1 == 3) { // [自动静态注释] 条件判断/分支
            uVar4 = FUN__text__0066c6d8(local_70,uStack_68,*(undefined8 *)(param_4 + 0x1008), // [自动静态注释] 调用尚未恢复正式名称的函数
                                        *(undefined8 *)(param_4 + 0x1010));
            uVar7 = 0x71c5c8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            goto LAB__text__0065b760; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          } // [自动静态注释] 作用域/控制流边界
          lVar8 = *(long *)(param_4 + 0xf0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          uVar4 = FUN__text__0066c6d8(local_70,uStack_68,*(undefined8 *)(param_4 + 0x1008), // [自动静态注释] 调用尚未恢复正式名称的函数
                                      *(undefined8 *)(param_4 + 0x1010));
          if (lVar8 == -1) { // [自动静态注释] 条件判断/分支
            FUN__text__0066713c(param_4,0x7180fb,uVar4,*(undefined8 *)(param_4 + 0x100)); // [自动静态注释] 调用尚未恢复正式名称的函数
          } // [自动静态注释] 作用域/控制流边界
          else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
            FUN__text__0066713c(param_4,0x70de1a,uVar4,*(undefined8 *)(param_4 + 0x100), // [自动静态注释] 调用尚未恢复正式名称的函数
                                *(undefined8 *)(param_4 + 0xf0));
          } // [自动静态注释] 作用域/控制流边界
        } // [自动静态注释] 作用域/控制流边界
        uVar1 = *(uint *)(param_4 + 0x60); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        if (9 < uVar1) { // [自动静态注释] 条件判断/分支
          FUN__text__00650d38(*(undefined8 *)(param_4 + 0x10),2); // [自动静态注释] 调用尚未恢复正式名称的函数
        } // [自动静态注释] 作用域/控制流边界
        FUN__text__0065a554(param_4,0x1c,1); // [自动静态注释] 调用尚未恢复正式名称的函数
        iVar3 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        uVar5 = *(uint *)(param_4 + 0x60); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        if (uVar5 < 0x11) { // [自动静态注释] 条件判断/分支
          FUN__text__0065cb00(param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
          if (*(long *)(param_4 + 0x10) == 0) { // [自动静态注释] 条件判断/分支
            iVar3 = *(int *)(param_4 + 0x60); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            if (iVar3 == 2) { // [自动静态注释] 条件判断/分支
              FUN__text__0066dd80(param_4); // [自动静态注释] 调用尚未恢复正式名称的函数
              goto LAB__text__0065c068; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
            } // [自动静态注释] 作用域/控制流边界
          } // [自动静态注释] 作用域/控制流边界
          else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
            FUN__text__00665998(); // [自动静态注释] 调用尚未恢复正式名称的函数
            FUN__text__00665dac(*(undefined8 *)(param_4 + 0x10)); // [自动静态注释] 调用尚未恢复正式名称的函数
            FUN__text__006706dc(param_4,*(long *)(param_4 + 0x10) + 0x4a8); // [自动静态注释] 调用尚未恢复正式名称的函数
            FUN__text__006706dc(param_4,*(long *)(param_4 + 0x10) + 0x4c8); // [自动静态注释] 调用尚未恢复正式名称的函数
            if (9 < uVar1) { // [自动静态注释] 条件判断/分支
              FUN__text__00670414(param_4,*(undefined8 *)(param_4 + 0x10),1); // [自动静态注释] 调用尚未恢复正式名称的函数
              *(undefined8 *)(param_4 + 0x10) = 0;
            } // [自动静态注释] 作用域/控制流边界
LAB__text__0065c068: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
            iVar3 = *(int *)(param_4 + 0x60); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          } // [自动静态注释] 作用域/控制流边界
          if (iVar3 != 0x11) { // [自动静态注释] 条件判断/分支
            *(undefined4 *)(param_4 + 0x60) = 0x11;
            *(int *)(*(long *)(param_4 + 0xd8) + 0x1c) =
                 *(int *)(*(long *)(param_4 + 0xd8) + 0x1c) + -1;
            *(undefined8 *)(param_4 + 0x10) = 0;
            FUN__text__0065a4c8(param_4); // [自动静态注释] 调用尚未恢复正式名称的函数
          } // [自动静态注释] 作用域/控制流边界
          iVar3 = -1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          uVar5 = *(uint *)(param_4 + 0x60); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        } // [自动静态注释] 作用域/控制流边界
        if (uVar5 == 0x11) { // [自动静态注释] 条件判断/分支
          if (*(code **)(param_4 + 0xf18) == (code *)0x0) { // [自动静态注释] 条件判断/分支
            *(long *)(param_4 + 0x88) = param_4;
            *(undefined4 *)(param_4 + 0x80) = 1;
            *(undefined4 *)(param_4 + 0x90) = 0x1c;
            FUN__text__00656b20(param_1 + 0x20,*(undefined8 *)(param_1 + 0x28),param_4 + 0x68, // [自动静态注释] 调用尚未恢复正式名称的函数
                                param_4 + 0x68); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
            iVar3 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          } // [自动静态注释] 作用域/控制流边界
          else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
            (**(code **)(param_4 + 0xf18))(param_4,0x1c); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          } // [自动静态注释] 作用域/控制流边界
          if (*(int *)(param_4 + 0x60) != 0x12) { // [自动静态注释] 条件判断/分支
            *(undefined4 *)(param_4 + 0x60) = 0x12;
          } // [自动静态注释] 作用域/控制流边界
        } // [自动静态注释] 作用域/控制流边界
      } while ((iVar3 == -1) || (*(char *)(param_1 + 0xf0) != '\0')); // [自动静态注释] 循环/迭代
      uVar7 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(undefined4 *)(param_4 + 100) = 0x1c;
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  return uVar7; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


