/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0035E544
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0045e544; name: FUN_.text__0045e544
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0045e544(long param_1,long param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  byte bVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_40; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 local_38; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  char local_34 [4]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  *(ulong *)(param_2 + 0x90) = *(ulong *)(param_2 + 0x90) | 0xf000000007f80020;
  *(ulong *)(param_2 + 0x98) = *(ulong *)(param_2 + 0x98) | 0x13f;
  FUN__text__0045e0f0(); // [自动静态注释] 调用尚未恢复正式名称的函数
  uVar3 = (ulong)_DAT_0073b558; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (_DAT_0073b558 != 0x1a) { // [自动静态注释] 条件判断/分支
    fVar6 = *(float *)(param_2 + 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if ((DAT_00ae9aa8 == 1) && ((*(byte *)(param_2 + 0xa0) & 1) != 0)) { // [自动静态注释] 条件判断/分支
      if (fVar6 != 0.0) { // [自动静态注释] 条件判断/分支
        local_34[0] = '\0'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        local_40 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        local_38 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        lVar2 = FUN__text__004626a0(param_2 + 0x68,&local_40,local_34); // [自动静态注释] 调用尚未恢复正式名称的函数
        if (lVar2 == 0) { // [自动静态注释] 条件判断/分支
          fVar6 = 0.0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          fVar4 = 0.0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          bVar1 = *(byte *)(param_2 + 0xb0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        } // [自动静态注释] 作用域/控制流边界
        else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          if (local_34[0] == '\0') { // [自动静态注释] 条件判断/分支
            fVar4 = 0.0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          } // [自动静态注释] 作用域/控制流边界
          else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
            fVar4 = *(float *)(lVar2 + 0xc); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          } // [自动静态注释] 作用域/控制流边界
          fVar6 = fVar4 + fVar6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          *(float *)(lVar2 + 0xc) = fVar6;
          bVar1 = *(byte *)(param_2 + 0xb0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        } // [自动静态注释] 作用域/控制流边界
        if (((bVar1 & 1) != 0) || // [自动静态注释] 条件判断/分支
           ((fVar5 = *(float *)(param_2 + uVar3 * 4), fVar4 == fVar5 && (fVar6 < fVar5)))) { // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          *(ushort *)(param_2 + 0xc2) = *(ushort *)(param_2 + 0xc2) | 0x400;
        } // [自动静态注释] 作用域/控制流边界
        else if (fVar5 < fVar6) { // [自动静态注释] 条件判断/分支
          *(float *)(param_2 + uVar3 * 4) = fVar6;
        } // [自动静态注释] 作用域/控制流边界
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
    else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      *(float *)(param_2 + uVar3 * 4) = *(float *)(param_2 + uVar3 * 4) + fVar6;
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  if (*(undefined4 **)(param_1 + 0x88) != (undefined4 *)0x0) { // [自动静态注释] 条件判断/分支
    *(undefined4 *)(param_2 + 0x7c) = **(undefined4 **)(param_1 + 0x88);
    *(undefined4 *)(param_2 + 0x80) = *(undefined4 *)(*(long *)(param_1 + 0x88) + 4);
    *(undefined4 *)(param_2 + 0x84) = *(undefined4 *)(*(long *)(param_1 + 0x88) + 8);
    *(undefined4 *)(param_2 + 0x88) = *(undefined4 *)(*(long *)(param_1 + 0x88) + 0xc);
  } // [自动静态注释] 作用域/控制流边界
  *(ushort *)(param_2 + 0xc2) =
       *(ushort *)(param_2 + 0xc2) & 0xfffe |
       (ushort)((uint)*(undefined4 *)(param_1 + 0xd2) >> 0x12) & 1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  *(undefined4 *)(param_2 + 0x8c) = *(undefined4 *)(param_1 + 0xa0);
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


