/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_003324B0
 * 用途/行为：用途尚未确认；代码可观察到：内存复制/初始化, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004324b0; name: FUN_.text__004324b0
 */


int FUN__text__004324b0(undefined8 *param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4 // [自动静态注释] 调用尚未恢复正式名称的函数
                       ,undefined1 param_5,undefined1 param_6,undefined4 param_7,undefined4 param_8, // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                       undefined4 param_9,undefined8 param_10,undefined4 param_11,long *param_12) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义

{ // [自动静态注释] 作用域/控制流边界
  int iVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 *puVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  puVar2 = (undefined4 *)FUN__text__00432620(param_1,param_8,param_7); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (puVar2 == (undefined4 *)0x0) { // [自动静态注释] 条件判断/分支
    iVar1 = 0x34; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    *puVar2 = param_4;
    puVar2[1] = param_8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined1 *)((long)puVar2 + 0xd) = param_5;
    *(undefined1 *)(puVar2 + 3) = param_6;
    puVar2[2] = param_7; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puVar2[4] = param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    iVar1 = FUN__text__00432788(puVar2,param_10,param_11,param_9); // [自动静态注释] 调用尚未恢复正式名称的函数
    if (iVar1 == 1) { // [自动静态注释] 条件判断/分支
      if (param_12 == (long *)0x0) { // [自动静态注释] 条件判断/分支
        iVar1 = 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        *param_12 = (long)puVar2;
        iVar1 = 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
    else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      plVar4 = (long *)*param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar5 = *(uint *)(param_1 + 1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      plVar3 = plVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (uVar5 == 0) { // [自动静态注释] 条件判断/分支
LAB__text__0043258c: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        if (plVar3 != plVar4 + uVar5) { // [自动静态注释] 条件判断/分支
          lVar6 = *plVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          uVar5 = uVar5 - 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          if (plVar3 < plVar4 + uVar5) { // [自动静态注释] 条件判断/分支
            memmove(plVar3,plVar3 + 1, // [自动静态注释] 内存复制、清零或移动
                    (ulong)(uint)((int)(plVar4 + uVar5) - (int)plVar3) & 0xfffffff8); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
            uVar5 = *(int *)(param_1 + 1) - 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          } // [自动静态注释] 作用域/控制流边界
          *(uint *)(param_1 + 1) = uVar5;
          if (lVar6 != 0) { // [自动静态注释] 条件判断/分支
            if (*(long *)(lVar6 + 0x18) != 0) { // [自动静态注释] 条件判断/分支
              FUN__text__00400fc0(0); // [自动静态注释] 调用尚未恢复正式名称的函数
            } // [自动静态注释] 作用域/控制流边界
            *(long *)(lVar6 + 0x18) = 0;
            *(undefined8 *)(lVar6 + 0x20) = 0;
            *(undefined4 *)(lVar6 + 0x28) = 1;
            FUN__text__00400fc0(2,lVar6); // [自动静态注释] 调用尚未恢复正式名称的函数
          } // [自动静态注释] 作用域/控制流边界
        } // [自动静态注释] 作用域/控制流边界
      } // [自动静态注释] 作用域/控制流边界
      else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        lVar6 = (ulong)uVar5 << 3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        do { // [自动静态注释] 循环/迭代
          if (*(int *)(*plVar3 + 4) == puVar2[1]) goto LAB__text__0043258c; // [自动静态注释] 条件判断/分支
          plVar3 = plVar3 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          lVar6 = lVar6 + -8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        } while (lVar6 != 0); // [自动静态注释] 循环/迭代
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  return iVar1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


