/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0042C540
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0052c540; name: FUN_.text__0052c540
 */


void FUN__text__0052c540(undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,long param_4, // [自动静态注释] 调用尚未恢复正式名称的函数
                        long param_5,long param_6) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义

{ // [自动静态注释] 作用域/控制流边界
  int *piVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int *piVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_68; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_60; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uStack_58; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (*(int *)(param_4 + 0x38) != 0) { // [自动静态注释] 条件判断/分支
    lVar3 = *(long *)(param_4 + 0x30); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (param_5 == 0) { // [自动静态注释] 条件判断/分支
      if (param_6 == 0) { // [自动静态注释] 条件判断/分支
        do { // [自动静态注释] 循环/迭代
          FUN__text__0052b270(lVar3); // [自动静态注释] 调用尚未恢复正式名称的函数
          lVar3 = lVar3 + 0x118; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        } while (lVar3 != *(long *)(param_4 + 0x30) + (ulong)*(uint *)(param_4 + 0x38) * 0x118); // [自动静态注释] 循环/迭代
      } // [自动静态注释] 作用域/控制流边界
      else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        do { // [自动静态注释] 循环/迭代
          puVar2 = (undefined8 *)(lVar3 + 0xe0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          if (*(int *)(lVar3 + 0xf8) != 0) { // [自动静态注释] 条件判断/分支
            puVar2 = (undefined8 *)(lVar3 + 0x20); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          } // [自动静态注释] 作用域/控制流边界
          local_68 = *puVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          local_60 = puVar2[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          uStack_58 = puVar2[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          uVar5 = FUN__text__00520f94(param_6,&local_68); // [自动静态注释] 调用尚未恢复正式名称的函数
          *(undefined8 *)(lVar3 + 8) = uVar5;
          *(undefined8 *)(lVar3 + 0x10) = param_2;
          *(undefined8 *)(lVar3 + 0x18) = param_3;
          FUN__text__0052b270(lVar3); // [自动静态注释] 调用尚未恢复正式名称的函数
          lVar3 = lVar3 + 0x118; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        } while (lVar3 != *(long *)(param_4 + 0x30) + (ulong)*(uint *)(param_4 + 0x38) * 0x118); // [自动静态注释] 循环/迭代
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
    else if (param_6 == 0) { // [自动静态注释] 条件判断/分支
      do { // [自动静态注释] 循环/迭代
        puVar2 = (undefined8 *)(lVar3 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        if (*(int *)(lVar3 + 0xf8) != 0) { // [自动静态注释] 条件判断/分支
          puVar2 = (undefined8 *)(lVar3 + (ulong)(*(int *)(lVar3 + 0xf8) - 1) * 0x18 + 0x20); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        } // [自动静态注释] 作用域/控制流边界
        local_68 = *puVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        local_60 = puVar2[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        uStack_58 = puVar2[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        uVar5 = FUN__text__00520f94(param_5,&local_68); // [自动静态注释] 调用尚未恢复正式名称的函数
        *(undefined8 *)(lVar3 + 0xe0) = uVar5;
        *(undefined8 *)(lVar3 + 0xe8) = param_2;
        *(undefined8 *)(lVar3 + 0xf0) = param_3;
        FUN__text__0052b270(lVar3); // [自动静态注释] 调用尚未恢复正式名称的函数
        lVar3 = lVar3 + 0x118; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } while (lVar3 != *(long *)(param_4 + 0x30) + (ulong)*(uint *)(param_4 + 0x38) * 0x118); // [自动静态注释] 循环/迭代
    } // [自动静态注释] 作用域/控制流边界
    else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      piVar4 = (int *)(lVar3 + 0xf8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      do { // [自动静态注释] 循环/迭代
        piVar1 = piVar4 + -0x3c; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        if (*piVar4 != 0) { // [自动静态注释] 条件判断/分支
          piVar1 = piVar4 + -0x36 + (ulong)(*piVar4 - 1) * 6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        } // [自动静态注释] 作用域/控制流边界
        local_68 = *(undefined8 *)piVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        local_60 = *(undefined8 *)(piVar1 + 2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        uStack_58 = *(undefined8 *)(piVar1 + 4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        uVar5 = FUN__text__00520f94(param_5,&local_68); // [自动静态注释] 调用尚未恢复正式名称的函数
        *(undefined8 *)(piVar4 + -6) = uVar5;
        *(undefined8 *)(piVar4 + -4) = param_2;
        *(undefined8 *)(piVar4 + -2) = param_3;
        piVar1 = piVar4 + -6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        if (*piVar4 != 0) { // [自动静态注释] 条件判断/分支
          piVar1 = piVar4 + -0x36; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        } // [自动静态注释] 作用域/控制流边界
        local_68 = *(undefined8 *)piVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        local_60 = *(undefined8 *)(piVar1 + 2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        uStack_58 = *(undefined8 *)(piVar1 + 4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        uVar5 = FUN__text__00520f94(param_6,&local_68); // [自动静态注释] 调用尚未恢复正式名称的函数
        *(undefined8 *)(piVar4 + -0x3c) = uVar5;
        *(undefined8 *)(piVar4 + -0x3a) = param_2;
        *(undefined8 *)(piVar4 + -0x38) = param_3;
        FUN__text__0052b270(piVar4 + -0x3e); // [自动静态注释] 调用尚未恢复正式名称的函数
        piVar1 = piVar4 + 8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        piVar4 = piVar4 + 0x46; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } while (piVar1 != (int *)(*(long *)(param_4 + 0x30) + // [自动静态注释] 循环/迭代
                                (ulong)*(uint *)(param_4 + 0x38) * 0x118)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


