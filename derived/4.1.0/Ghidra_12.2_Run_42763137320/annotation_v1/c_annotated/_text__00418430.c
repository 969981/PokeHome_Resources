/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00318430
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00418430; name: FUN_.text__00418430
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00418430(long param_1,long param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  byte bVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  byte *pbVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float *pfVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float local_54; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_50; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 local_48; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 local_40; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 local_38; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 local_30; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_28; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  FUN__text__004d3e64(); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(undefined4 *)(param_1 + 0x1b8) = 0xffffffff;
  *(undefined8 *)(param_1 + 0x1c0) = 0xc5800000c5800000;
  *(undefined8 *)(param_1 + 0x1c8) = 0xc5800000;
  *(byte *)(param_1 + 0x1bc) = *(byte *)(param_1 + 0x1bc) & 0xe8 | 4;
  FUN__text__004185c0(param_2,param_1 + 0x1d0,&local_54); // [自动静态注释] 调用尚未恢复正式名称的函数
  local_38 = 0xff; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_30 = 0xff; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_50 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_48 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_40 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_28 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(float *)(param_1 + 0x1d4) = 1.0 - 1.0 / local_54;
  if ((*(ulong **)(param_2 + 0x58) == (ulong *)0x0) || // [自动静态注释] 条件判断/分支
     ((**(ulong **)(param_2 + 0x58) >> ((ulong)_DAT_0073b324 & 0x3f) & 1) == 0)) { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    pbVar3 = *(byte **)(param_2 + 0x90); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar6 = _DAT_0073b1fc; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (pbVar3 != (byte *)0x0) { // [自动静态注释] 条件判断/分支
      bVar1 = *pbVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar5 = (uint)bVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (bVar1 < 2) { // [自动静态注释] 条件判断/分支
        uVar5 = 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      uVar2 = (ulong)uVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      pfVar4 = (float *)(pbVar3 + ((ulong)bVar1 & 0xfc)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      do { // [自动静态注释] 循环/迭代
        pfVar4 = pfVar4 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        pbVar3 = pbVar3 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        if (*pbVar3 == 0x1d) { // [自动静态注释] 条件判断/分支
          fVar6 = *pfVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          break; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        } // [自动静态注释] 作用域/控制流边界
        uVar2 = uVar2 - 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } while (uVar2 != 0); // [自动静态注释] 循环/迭代
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    fVar6 = (float)FUN__text__00419e90(*_DAT_008a45f0,param_2 + 0x48,(ulong)_DAT_0073b324,&local_50) // [自动静态注释] 调用尚未恢复正式名称的函数
    ; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  bVar1 = *(byte *)(param_2 + 0x19c); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar7 = 0.0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(byte *)(param_2 + 0x19c) = bVar1 & 0xef;
  *(byte *)(param_1 + 0x1bc) = *(byte *)(param_1 + 0x1bc) & 0xf7 | bVar1 & 8;
  if (0.0 < fVar6) { // [自动静态注释] 条件判断/分支
    fVar7 = (float)NEON_ucvtf(_DAT_008ab030); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar7 = expf((float)(int)-(uint)_DAT_008ab03c / (fVar6 * fVar7)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  *(float *)(param_1 + 0x1cc) = fVar7;
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


