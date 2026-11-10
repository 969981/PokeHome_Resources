/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0037D924
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0047d924; name: FUN_.text__0047d924
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0047d924(long param_1,long param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  int iVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 uStack_11; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar3 = *(long *)(param_1 + 0x98); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (lVar3 != param_2) { // [自动静态注释] 条件判断/分支
    if (lVar3 != 0) { // [自动静态注释] 条件判断/分支
      FUN__text__0044b5f0(*(undefined8 *)(lVar3 + 8),*(undefined8 *)(*(long *)(param_1 + 8) + 0x58)) // [自动静态注释] 调用尚未恢复正式名称的函数
      ; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      puVar4 = *(undefined8 **)(param_1 + 0x98); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      iVar2 = *(int *)(puVar4 + 0xc); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      iVar1 = iVar2 + -1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(int *)(puVar4 + 0xc) = iVar1;
      if (((iVar1 == 0) || // [自动静态注释] 条件判断/分支
          (((iVar1 == 1 && (iVar2 != 0 || *(char *)((long)puVar4 + 100) == '\0')) && // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
           (*(char *)((long)puVar4 + 100) != '\0')))) && // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
         (FUN__text__004473f0(puVar4), *(int *)(puVar4 + 0xc) == 0)) { // [自动静态注释] 调用尚未恢复正式名称的函数
        (**(code **)*puVar4)(puVar4); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        FUN__text__00400fc0(4,puVar4); // [自动静态注释] 调用尚未恢复正式名称的函数
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
    *(long *)(param_1 + 0x98) = param_2;
    if (param_2 != 0) { // [自动静态注释] 条件判断/分支
      iVar2 = FUN__text__0044b5b4(*(undefined8 *)(param_2 + 8), // [自动静态注释] 调用尚未恢复正式名称的函数
                                  *(undefined8 *)(*(long *)(param_1 + 8) + 0x58));
      if (iVar2 == 1) { // [自动静态注释] 条件判断/分支
        lVar3 = *(long *)(param_1 + 0x98); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        iVar2 = *(int *)(lVar3 + 0x60); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *(int *)(lVar3 + 0x60) = iVar2 + 1;
        if ((iVar2 == 1) && (*(char *)(lVar3 + 100) != '\0')) { // [自动静态注释] 条件判断/分支
          FUN__text__004473d0(); // [自动静态注释] 调用尚未恢复正式名称的函数
        } // [自动静态注释] 作用域/控制流边界
      } // [自动静态注释] 作用域/控制流边界
      else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        *(undefined8 *)(param_1 + 0x98) = 0;
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
    FUN__text__0044b8a0(_DAT_008a4480,*(undefined8 *)(*(long *)(param_1 + 8) + 0x58),&uStack_11); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


