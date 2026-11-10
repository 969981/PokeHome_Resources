/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00307510
 * 用途/行为：用途尚未确认；代码可观察到：内存复制/初始化, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00407510; name: FUN_.text__00407510
 */


void FUN__text__00407510(undefined4 param_1,undefined4 param_2,long *param_3,long param_4) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  uint uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  byte *pbVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 *puVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float *pfVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 *__s; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 auStack_90 [8]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_88; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  void *local_80; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong local_78; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 local_70; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_6c; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_64; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_5c; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if ((short)param_3[6] == *(short *)(param_4 + 0x10)) { // [自动静态注释] 条件判断/分支
    uVar1 = *(uint *)(param_3 + 5); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if ((uVar1 != *(uint *)(param_4 + 8)) || (((*(uint *)(param_4 + 8) ^ uVar1) & 0xff) != 0)) // [自动静态注释] 条件判断/分支
    goto LAB__text__004076c4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
LAB__text__004076c4: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    FUN__text__0041edb0(param_3 + 4); // [自动静态注释] 调用尚未恢复正式名称的函数
    *(undefined4 *)(param_3 + 5) = *(undefined4 *)(param_4 + 8);
    *(undefined4 *)((long)param_3 + 0x2c) = *(undefined4 *)(param_4 + 0xc);
    *(undefined2 *)(param_3 + 6) = *(undefined2 *)(param_4 + 0x10);
    *(undefined2 *)((long)param_3 + 0x32) = *(undefined2 *)(param_4 + 0x12);
    iVar2 = FUN__text__0041ec00(param_3 + 4); // [自动静态注释] 调用尚未恢复正式名称的函数
    if (iVar2 != 1) goto LAB__text__00407738; // [自动静态注释] 条件判断/分支
    uVar1 = *(uint *)(param_3 + 5); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  if ((uVar1 & 0xf00) != 0x200) { // [自动静态注释] 条件判断/分支
    (**(code **)(*param_3 + 0x10))(param_1,param_2,param_3,param_4); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    *(undefined2 *)((long)param_3 + 0x32) = *(undefined2 *)(param_4 + 0x12);
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  local_6c = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_64 = 0x3f800000ffffffff; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_5c = 0x1ffffffff; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_78 = *(ulong *)(param_4 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_80 = (void *)0x0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_70 = *(undefined4 *)(param_4 + 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  iVar2 = FUN__text__0041ec00(&local_80); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (iVar2 == 1) { // [自动静态注释] 条件判断/分支
    uVar8 = (ulong)(ushort)local_70; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    memset(local_80,0,(local_78 & 0xff) * uVar8 * 4); // [自动静态注释] 内存复制、清零或移动
    uVar3 = uVar1 & 0xff; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    __s = auStack_90 + -(ulong)((uVar3 * 4 + 0xc & 0x7f0) * uVar3); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    iVar2 = (uVar3 + 3 & 0x1fc) * uVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (iVar2 != 0) { // [自动静态注释] 条件判断/分支
      memset(__s,0,(ulong)(uint)(iVar2 * 4)); // [自动静态注释] 内存复制、清零或移动
    } // [自动静态注释] 作用域/控制流边界
    if (0xf < uVar3) { // [自动静态注释] 条件判断/分支
      uVar3 = 0x10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    uVar4 = (ulong)uVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (uVar3 != 0) { // [自动静态注释] 条件判断/分支
      pbVar5 = &DAT_00724ab0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar6 = __s; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      pfVar7 = (float *)&DAT_0073b0c0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      do { // [自动静态注释] 循环/迭代
        uVar4 = uVar4 - 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *(float *)(puVar6 + (ulong)*pbVar5 * 4) = 0.70710677 / *pfVar7;
        puVar6 = puVar6 + ((ulong)((uVar1 & 0xff) * 4 + 0xc) & 0x7f0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        pbVar5 = pbVar5 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        pfVar7 = pfVar7 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } while (uVar4 != 0); // [自动静态注释] 循环/迭代
    } // [自动静态注释] 作用域/控制流边界
    local_88 = 0x3f8000003f800000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    thunk_FUN__text__00420290(1.0 / (float)uVar8,param_4,&local_80,&local_88,__s,__s,uVar8); // [自动静态注释] 调用尚未恢复正式名称的函数
    (**(code **)(*param_3 + 0x10))(param_1,param_2,param_3,&local_80); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    *(undefined2 *)((long)param_3 + 0x32) = *(undefined2 *)(param_4 + 0x12);
    FUN__text__0041edb0(&local_80); // [自动静态注释] 调用尚未恢复正式名称的函数
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
LAB__text__00407738: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  *(undefined2 *)((long)param_3 + 0x32) = 0;
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


