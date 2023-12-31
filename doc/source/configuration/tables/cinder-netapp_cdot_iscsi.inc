.. _cinder-netapp_cdot_iscsi:

.. list-table:: Description of NetApp cDOT iSCSI driver configuration options
   :header-rows: 1
   :class: config-ref-table

   * - Configuration option = Default value
     - Description
   * - **[DEFAULT]**
     -
   * - ``netapp_login`` = ``None``
     - (String) Administrative user account name used to access the storage system or proxy server.
   * - ``netapp_lun_ostype`` = ``None``
     - (String) This option defines the type of operating system that will access a LUN exported from Data ONTAP; it is assigned to the LUN at the time it is created.
   * - ``netapp_lun_space_reservation`` = ``enabled``
     - (String) This option determines if storage space is reserved for LUN allocation. If enabled, LUNs are thick provisioned. If space reservation is disabled, storage space is allocated on demand.
   * - ``netapp_password`` = ``None``
     - (String) Password for the administrative user account specified in the netapp_login option.
   * - ``netapp_pool_name_search_pattern`` = ``(.+)``
     - (String) This option is used to restrict provisioning to the specified pools. Specify the value of this option to be a regular expression which will be applied to the names of objects from the storage backend which represent pools in Cinder. This option is only utilized when the storage protocol is configured to use NVMe, iSCSI or FC.
   * - ``netapp_replication_aggregate_map`` = ``None``
     - (Unknown) Multi opt of dictionaries to represent the aggregate mapping between source and destination back ends when using whole back end replication. For every source aggregate associated with a cinder pool (NetApp FlexVol), you would need to specify the destination aggregate on the replication target device. A replication target device is configured with the configuration option replication_device. Specify this option as many times as you have replication devices. Each entry takes the standard dict config form: netapp_replication_aggregate_map = backend_id:<name_of_replication_device_section>,src_aggr_name1:dest_aggr_name1,src_aggr_name2:dest_aggr_name2,...
   * - ``netapp_server_hostname`` = ``None``
     - (String) The hostname (or IP address) for the storage system or proxy server.
   * - ``netapp_server_port`` = ``None``
     - (Integer) The TCP port to use for communication with the storage system or proxy server. If not specified, Data ONTAP drivers will use 80 for HTTP and 443 for HTTPS.
   * - ``netapp_size_multiplier`` = ``1.2``
     - (Floating point) The quantity to be multiplied by the requested volume size to ensure enough space is available on the virtual storage server (Vserver) to fulfill the volume creation request. Note: this option is deprecated and will be removed in favor of "reserved_percentage" in the Mitaka release.
   * - ``netapp_snapmirror_quiesce_timeout`` = ``3600``
     - (Integer) The maximum time in seconds to wait for existing SnapMirror transfers to complete before aborting during a failover.
   * - ``netapp_storage_family`` = ``ontap_cluster``
     - (String) The storage family type used on the storage system; the only valid value is ontap_cluster for using clustered Data ONTAP.
   * - ``netapp_storage_protocol`` = ``None``
     - (String) The storage protocol to be used on the data path with the storage system.
   * - ``netapp_transport_type`` = ``http``
     - (String) The transport protocol used when communicating with the storage system or proxy server.
   * - ``netapp_vserver`` = ``None``
     - (String) This option specifies the virtual storage server (Vserver) name on the storage cluster on which provisioning of block storage volumes should occur.
