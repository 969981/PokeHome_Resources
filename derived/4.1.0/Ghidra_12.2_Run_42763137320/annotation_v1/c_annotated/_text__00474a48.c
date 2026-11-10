/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00374A48
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00474a48; name: FUN_.text__00474a48
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00474a48(long param_1,uint param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  uint *puVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 *puVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  puVar1 = (uint *)(param_1 + 0x313); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if ((*puVar1 >> 0xc & 1) == 0) { // [自动静态注释] 条件判断/分支
    *puVar1 = *puVar1 | 0x1000;
    puVar2 = _DAT_008a4648; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if ((param_2 | 2) == 2) { // [自动静态注释] 条件判断/分支
      if (*(long *)(param_1 + 0x288) != 0) { // [自动静态注释] 条件判断/分支
        FUN__text__0042f5a0(*_DAT_008a4648,*(long *)(param_1 + 0x288),param_1 + 0x10); // [自动静态注释] 调用尚未恢复正式名称的函数
        *(undefined8 *)(param_1 + 0x288) = 0;
      } // [自动静态注释] 作用域/控制流边界
      if (*(long *)(param_1 + 0x290) != 0) { // [自动静态注释] 条件判断/分支
        FUN__text__0042f5a0(*puVar2,*(long *)(param_1 + 0x290),param_1 + 0x10); // [自动静态注释] 调用尚未恢复正式名称的函数
        *(undefined8 *)(param_1 + 0x290) = 0;
      } // [自动静态注释] 作用域/控制流边界
      lVar4 = *(long *)(param_1 + 0x168); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (lVar4 != 0) { // [自动静态注释] 条件判断/分支
        if ((*(byte *)(lVar4 + 0x28) >> 1 & 1) != 0) { // [自动静态注释] 条件判断/分支
          puVar3 = (undefined4 *)FUN__text__0046ab20(*(undefined8 *)(param_1 + 0x1e8)); // [自动静态注释] 调用尚未恢复正式名称的函数
          plVar5 = *(long **)(puVar3 + 2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          if (plVar5 != (long *)0x0) { // [自动静态注释] 条件判断/分支
            if (*(ushort *)(plVar5 + 2) - 1 == 0) { // [自动静态注释] 条件判断/分支
              if (*plVar5 != 0) { // [自动静态注释] 条件判断/分支
                *(undefined4 *)(plVar5 + 1) = 0;
                FUN__text__00400fc0(0); // [自动静态注释] 调用尚未恢复正式名称的函数
                *plVar5 = 0;
                *(undefined4 *)((long)plVar5 + 0xc) = 0;
              } // [自动静态注释] 作用域/控制流边界
              FUN__text__00400fc0(0,plVar5); // [自动静态注释] 调用尚未恢复正式名称的函数
            } // [自动静态注释] 作用域/控制流边界
            else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
              *(short *)(plVar5 + 2) = (short)(*(ushort *)(plVar5 + 2) - 1);
            } // [自动静态注释] 作用域/控制流边界
          } // [自动静态注释] 作用域/控制流边界
          *(undefined8 *)(puVar3 + 2) = 0;
          *puVar3 = 0;
          lVar4 = *(long *)(param_1 + 0x168); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        } // [自动静态注释] 作用域/控制流边界
        FUN__text__0047bea0(*_DAT_008a4650,lVar4,param_1 + 0x18); // [自动静态注释] 调用尚未恢复正式名称的函数
        *(undefined8 *)(param_1 + 0x168) = 0;
        *(undefined4 *)(param_1 + 0x170) = 0;
      } // [自动静态注释] 作用域/控制流边界
      if (((*puVar1 >> 0xe & 1) != 0) && (*(int *)(param_1 + 0x380) == 0)) { // [自动静态注释] 条件判断/分支
        *(undefined4 *)(param_1 + 0x380) = 0xffffffff;
      } // [自动静态注释] 作用域/控制流边界
      *puVar1 = *puVar1 & 0xfffffeff | 0x400;
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


