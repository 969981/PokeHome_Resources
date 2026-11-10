/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_003ECEA0
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004ecea0; name: FUN_.text__004ecea0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__004ecea0(long param_1,long param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  int iVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  byte bVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 auVar4 [16]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar10; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar11; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 local_68; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint local_64; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (*(long *)(param_1 + 0x80) != 0 && *(char *)(param_1 + 0x94) != '\0') { // [自动静态注释] 条件判断/分支
    local_64 = FUN__text__004f53e0(*(undefined8 *)(param_1 + 0x10)); // [自动静态注释] 调用尚未恢复正式名称的函数
    lVar10 = *(long *)(param_2 + 0x50); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar11 = *(long *)(lVar10 + 0x138); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    bVar2 = *(byte *)(lVar11 + 0x20) & 0x1f; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (bVar2 != 8) { // [自动静态注释] 条件判断/分支
      if ((*(byte *)(param_1 + 0x5a) & 1) == 0) { // [自动静态注释] 条件判断/分支
        FUN__text__004ed850(param_1 + 0x60); // [自动静态注释] 调用尚未恢复正式名称的函数
        FUN__text__004ecab0(param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
        return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
      } // [自动静态注释] 作用域/控制流边界
      iVar3 = *(int *)(lVar11 + 0x3c); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar5 = local_64 - iVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      auVar4 = SEXT816((long)((ulong)*_DAT_008a4b68 * (long)*(int *)(lVar11 + 0x28))) * // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
               SEXT816(-0x20c49ba5e353f7cf); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      iVar1 = *(int *)(lVar11 + 0x30) + ((int)(auVar4._8_8_ >> 7) - (auVar4._12_4_ >> 0x1f)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar6 = local_64 - iVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if ((int)local_64 <= (int)uVar6) { // [自动静态注释] 条件判断/分支
        local_64 = uVar6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      if ((int)local_64 <= (int)uVar5) { // [自动静态注释] 条件判断/分支
        local_64 = uVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      local_64 = local_64 & ((int)local_64 >> 0x1f ^ 0xffffffffU); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      local_68 = *(undefined4 *)(lVar11 + 0x24); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      iVar8 = FUN__text__004f41e0(*(undefined8 *)(param_1 + 0x78),local_64,bVar2,&local_68,0, // [自动静态注释] 调用尚未恢复正式名称的函数
                                  &local_64); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      if (iVar8 == 1) { // [自动静态注释] 条件判断/分支
        do { // [自动静态注释] 循环/迭代
          uVar7 = local_64; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          iVar8 = FUN__text__004f47e8(*(undefined8 *)(param_1 + 0x78)); // [自动静态注释] 调用尚未恢复正式名称的函数
          iVar8 = FUN__text__004efda0(lVar10,iVar8 + uVar7); // [自动静态注释] 调用尚未恢复正式名称的函数
          uVar6 = iVar8 + uVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          if ((int)uVar6 <= (int)uVar7) { // [自动静态注释] 条件判断/分支
            iVar9 = FUN__text__004f4810(*(undefined8 *)(param_1 + 0x78)); // [自动静态注释] 调用尚未恢复正式名称的函数
            if ((int)uVar7 < iVar9) { // [自动静态注释] 条件判断/分支
              iVar3 = uVar7 + iVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
              iVar1 = uVar7 + iVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
              iVar8 = iVar3 - iVar8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
              FUN__text__004ed0b0(param_1,param_2,iVar1,iVar8); // [自动静态注释] 调用尚未恢复正式名称的函数
              FUN__text__004ed1f0(param_1,param_2,iVar1,(int *)(lVar11 + 0x28)); // [自动静态注释] 调用尚未恢复正式名称的函数
              FUN__text__004ed390(param_1,param_2,iVar8,iVar3,lVar11 + 0x34); // [自动静态注释] 调用尚未恢复正式名称的函数
              FUN__text__004ecd40(param_1,uVar7,lVar10); // [自动静态注释] 调用尚未恢复正式名称的函数
              return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
            } // [自动静态注释] 作用域/控制流边界
            return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
          } // [自动静态注释] 作用域/控制流边界
          local_68 = *(undefined4 *)(lVar11 + 0x24); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          local_64 = uVar6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          iVar8 = FUN__text__004f41e0(*(undefined8 *)(param_1 + 0x78),uVar6, // [自动静态注释] 调用尚未恢复正式名称的函数
                                      *(byte *)(lVar11 + 0x20) & 0x1f,&local_68,0,&local_64);
        } while (iVar8 == 1); // [自动静态注释] 循环/迭代
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


